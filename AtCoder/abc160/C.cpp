#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {
    
    ll p, n; cin >> p >> n;
    ll a[n];
    for(int i = 0; i < n ; i++)
        cin >> a[i];
    
    ll big_dist = 0;

    for(int i = 1; i < n; i++) {
        ll dif = abs(a[i] - a[i-1]);
        if(dif > big_dist) big_dist = dif;
    }
    if((p - a[n-1]) + a[0] > big_dist) big_dist = (p - a[n-1]) + a[0];

    cout << p-big_dist << endl;
    return 0;
}