#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    int t; cin >> t;
    while(t--) {
        ll a, b; cin >> a >> b;
        if(a%b == 0) {
            cout << 0 << endl;
        }
        else {
            if (a > b) {
                cout << b - a%b << endl;
            }
            else {
                cout << b-a << endl;
            }
        }
    }
    return 0;
}