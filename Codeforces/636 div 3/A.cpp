#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {

    int t; cin>>t;

    vector<ll> conj;
    ll cur = 1;
    conj.push_back(cur);
    ll sum = 1;
    while(sum < 1000000000LL) {
        cur+=cur;
        sum+=cur;
        conj.push_back(sum);
    }


    while(t--) {
        ll n; cin >> n;

       
        ll x = 1;
        int i = 1;
        while(true) {
            
            if(n%conj[i] == 0) {
                cout << n/conj[i] << endl;
                break;
            }
            i++;
        }
    
    }

    return 0;
}