#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {

    int t; cin >> t;

    while(t--) {
        ll n, m; cin >> n >> m;

        if(n == 1) {
            cout << 0 << endl;
            continue;
        }

        ll numbers = n/2;
        ll zeroes = n - numbers;
        ll each = m/numbers;
        ll last = (m/numbers) + (m%numbers);
        ll resp = 0;
        if(n == 2) {
            cout << each << endl;
        } else {
            // if(n%2 != 0) {
                resp = (numbers-1) * (each) * 2;
                resp += (last*2);
            // } else {
            //    resp = ((numbers-1) * (each) * 2);
            //    resp += (last*2);
            // }

            cout << resp << endl;
        }

    }

    return 0;
}