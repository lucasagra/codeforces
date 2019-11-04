#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {

    ll n; cin >> n;
    ll costs[10];
    ll min = 100000000;
    int min_i = 1;
    for(int i = 1; i < 10; ++i)
    {
        cin >> costs[i];
        if (costs[i] <= min) {
            min = costs[i];
            min_i = i;
        }
    }

    int count = n / min;
    if(count == 0) {
        printf("-1\n");
        return 0;
    }
    while (count) {
        for(int i = 9; i > 0; --i) {
            if(count <= 1) {
                if(costs[i] <= n) {
                    cout << i << endl;
                    break;
                }
            }
            else if((n-costs[i])/min >= (count-1)) {
                cout << i;
                n -= costs[i];
                break;
            }
        }

        count--;
    }
    return 0;
}