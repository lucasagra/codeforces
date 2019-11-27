#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;

        ll biggest_l = 0LL;
        ll lowest_r = 9999999999999999LL;

        for(int i = 0; i < n; i++) {
 
            ll l, r; cin >> l >> r;
            if(l > biggest_l) biggest_l = l;
            if(r < lowest_r) lowest_r = r;
        }

        ll resp = biggest_l - lowest_r;
        cout << max(0LL, resp) << endl;

    }
    return 0;
}