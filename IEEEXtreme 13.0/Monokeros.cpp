//75% tests passed

#include <stdio.h>
#include <stdlib.h>

typedef struct node NODE;
typedef long long int lli;

struct node {
    lli val;
    NODE *left, *right;
};

NODE *iterativeAdd(NODE *root, lli data) {
    NODE *newNode = (NODE*)malloc(sizeof(NODE));
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->val = data;
    lli height = 1;
    if (root == NULL) {
        printf("1");
        return newNode;
    }
    NODE *parent = NULL, *current = root;
    while (current != NULL) {
        parent = current;
        if (current->val < data) {
            current = current->right;
        } else {
            current = current->left;
        }
        ++height;
    }
    if (parent->val < data) {
        parent->right = newNode;
    } else {
        parent->left = newNode;
    }
    printf("%lld", height);
    return root;
}

int main() {
    lli n;
    scanf("%lld" ,&n);
    int i;
    NODE *root = NULL;
    for (i = 0; i < n; ++i) {
        lli x;
        scanf("%lld", &x);
        root = iterativeAdd(root, x);
        if (i != n - 1) {
            printf(" ");
        } else {
            printf("\n");
        }
    }
    return 0;
}