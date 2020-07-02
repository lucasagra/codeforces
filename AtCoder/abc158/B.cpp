#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {
    ll n, a, b; cin >> n >> a >> b;

    ll factor = n/(a+b);
    ll rem = n%(a+b);

    ll resp = a*factor;
    rem = rem < a ? rem : a;
    resp += rem;
    cout << resp << endl;
    
    return 0;
}