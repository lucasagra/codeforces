#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int test(int pos, int heights[], int size) {
    int cur = 1;
    int i = pos;

    while(i+1 < size && heights[i]>=heights[i+1])
    {
        cur++;
        i++;
    }
    i = pos;
    while(i-1 >= 0 && heights[i]>=heights[i-1])
    {
        i--;
        cur++;
    }

    return cur;
}

int main () {

    int n; cin >> n;
    int heights[n];
    for(int i=0; i < n; ++i) cin >> heights[i];

    int max = 0;
    int cur = 0;
    max = test(n-1, heights, n);

    for (int i = 0; i < n-1; ++i)
    {
        if(heights[i] > heights[i+1]) {
            cur = test(i, heights, n);
            if (cur > max) max = cur;
        }
    }

    cout << max << endl;
    return 0;
}