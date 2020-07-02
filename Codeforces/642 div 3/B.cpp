#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
 
    int t; cin >> t;

    while(t-- ) {
        ll n, k; cin >> n >> k;
        vector<ll> a;
        vector<ll> b;

        ll aux;
        for(int i = 0; i < n; i++) {
            cin >> aux;
            a.push_back(aux);
        }
        for(int i = 0; i < n; i++) {
            cin >> aux;
            b.push_back(aux);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        ll sum = 0;
        for(int i = 0; i < n; i++) {
            
            if(k > 0) {
                if(b[b.size()-1-i] > a[i]) {
                    sum += b[b.size()-1-i];
                    k--;
                } else {
                    sum += a[i];
                }
            } else {
                sum += a[i];
            }
        }

        cout << sum << endl;
  
    }

    return 0;
}