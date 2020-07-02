#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {

    ll a, b, c, k;
    cin >> a >> b >> c >> k;

    ll sum= 0;

    if(k > a) {
        sum+=a;
        k-=a;
    } else {
        sum+=k;
        k=0;
    }

    k -= b;

    if (k>0) {
        sum-=k;
    }
    
    cout << sum;
    return 0;
}