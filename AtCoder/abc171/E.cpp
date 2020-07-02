#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {
    
    vector<ll> kinds;
    ll k, n; cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int aux;
        cin >> aux>>
        kinds.push_back(aux);
    }

    sorted(kinds.begin(), kinds.end());

    ll resp = 0;

    for(int i = 0; i < k; i++) {
        resp += kinds[i];
    }
    cout << resp << endl;
    return 0;
}