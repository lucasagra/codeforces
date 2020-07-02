#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

char numtochar(ll num) {
    return num+96;
}

void printvec(vector<ll> v) {
    for(int i = 0; i < v.size(); i++) {
        cout<<v[i] << " ";
    }
    cout << endl;
}

int main () {

    ll n; cin >> n;
    vector <ll> resp;
    vector <ll> weights;
    vector <ll> weights2;
    weights.push_back(1);
    ll cur = 26;
    ll sum = 1;
    ll i = 0;
    while (sum <= n) {
        
        weights2.push_back(cur);
        sum += cur;
        weights.push_back(sum);
        cur *= 26;
        i++;
    }

    ll j = 0;
    ll rem;
    while(n > 26) {
        rem = (n-weights[weights.size()-3-j]) / weights2[weights2.size()-2-j];
        resp.push_back(rem);
        n -= weights2[weights2.size()-2-j] * rem;
        j++;
    }
    resp.push_back(n);

    for(ll k = 0; k < resp.size(); k++) {
        cout << numtochar(resp[k]);
    }
    cout << endl;
    return 0;
}