#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {

        ll n; cin >> n;

        vector<ll> v;
        ll sum = 0;
        n/=2;
        for(ll i = 1LL; i <= n; i++) {
            v.push_back(i*2);
            sum+=(i*2);
        }

        ll max = 0;
        ll sum2 = 0;
        for(ll i = 0LL; i < n-1; i++) {
            v.push_back((i*2)+1);
            sum2 += ((i*2)+1);
            max = ((i*2)+1);
        }

        if((sum-sum2)%2 == 0 || (sum-sum2) <= max) cout << "NO" << endl;
        else {
            cout << "YES" << endl;
            v.push_back(sum-sum2);
            for(int i = 0; i < v.size(); i++) {
                cout << v[i] << " ";
        
            }
            cout << endl;
        }
    }

    return 0;
}