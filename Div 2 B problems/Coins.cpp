#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

void print(ll n) {
    if (n==1) cout << ' ' << n << endl;
    else cout << ' ' << n;
}
int main () {
    ll n;
    cin >> n;
    cout << n;
    int flag;
    while (n != 1) {
        flag = 1;
        if (n%2 == 0) {
            n /= 2;
            print(n);
            continue;
        }
        for (ll i = 3; i <= sqrt(n); i+=2) {
            //cout << endl << n << " testing " << i << endl;
            if (n%i == 0){                
                n /= i;
                print(n);
                flag = 0;
                break;
            }
        }
        if (flag) {
            n = 1;
            print(n);
        }
    }
    return 0;
}