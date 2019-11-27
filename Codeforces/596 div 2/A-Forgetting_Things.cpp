#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        printf("%d%d %d%d", a, 0, b, 1);
    }
    else if (a < b)
    {
        if (b - a > 1)
        {
            printf("-1\n");
            return 0;
        }
        printf("%d %d", a, b);
    }
    else if (a > b)
    {
        if (a == 9 && b == 1)
        {
            printf("9 10\n");
        } else {
            printf("-1\n");
        }
    }

    return 0;
}