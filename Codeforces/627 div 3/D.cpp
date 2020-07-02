#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll n; cin >> n;
    vector<ll> as;
    vector<ll> bs;
    ll aux;
    for(ll i = 0; i < n; i++) {
        cin >> aux;
        as.push_back(aux);
    }
    for(ll i = 0; i < n; i++) {
        cin >> aux;;
        bs.push_back(aux);
    }
    vector<ll> result;
    for(ll i = 0; i < n; i++) {
        result.push_back(as[i]-bs[i]);
    }

    sort(result.begin(), result.end(),greater <>());
    // 5 3 0 -1 -2

    // for(ll i = 0; i < n; i++) {
    //     cout << result[i] << " ";
    // }    
    // cout << endl;

    ll resp = 0;
    ll right = result.size()-1;

    for(ll i = 0; i < n; i++) {
        if(result[i] <= 0) break;

        while(result[right] < 0 && result[i]+result[right] <= 0) {
            right--;
        }
        resp += (right-i);
    }

    cout << resp << endl;
    return 0;
}