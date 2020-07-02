#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {

    ll x; cin >> x;

    ll resp = 0;

    resp += (x/500)*1000;
    resp += ((x%500)/5)*5;

    cout << resp << endl;

    return 0;
}