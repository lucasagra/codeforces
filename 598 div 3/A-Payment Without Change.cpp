#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int t; cin >> t;

    while(t--) {
        ll a, b, n, S; cin >> a >> b >> n >> S;

        if (b >= S) cout << "YES" << endl;
        else {
            if (a*n + b >= S) {
                if(S%n <= b) cout << "YES" << endl;
                else cout << "NO" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}