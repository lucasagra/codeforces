#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll ratio1 (ll tot, ll a1) {
    ll x1 = ((1- (2*a1)) + sqrt(pow((2*a1)-1,2) + 8*tot) ) / 2;
    ll x2 = ((1- (2*a1)) - sqrt(pow((2*a1)-1,2) + 8*tot) ) / 2;
    // cout << x1 << " " << x2 << endl;
    return x1>x2 ? x1:x2;

}
ll ratio2 (ll tot, ll a1) {
    ll x1 = ((1-a1) + sqrt(pow(a1-1,2) + 4*tot) ) / 2;
    ll x2 = ((1-a1) - sqrt(pow(a1-1,2) + 4*tot) ) / 2;
    // cout << x1 << " " << x2 << endl;
    return x1>x2 ? x1:x2;
}

ll sum (ll n, ll a1, ll an) {

    return n*(a1 + an)/2;

}
int main () {

    int t; cin >> t;
    int cur = 1;

    while(cur <= t) {

        ll left, right; cin >> left >> right;

        ll i = 1;
        ll costumers = 0;

        ll dif = abs(left-right);

        costumers = ratio1(dif, 1);
        i = costumers;



        if(left >= right) {
            left -= sum(i, 1, i);
        } else {
            right -= sum(i, 1, i);
        }

    
        // cout <<left << " " << right << " " << i << endl;
        // cout << ratio2(left, i+1) << " " << ratio2(right, i+2) << endl;

        ll costumers1 = ratio2(left, i+1);
        ll costumers2 = ratio2(right, i+2);

        // cout << costumers1 << " " << costumers2 << endl;
        // cout << sum(costumers1, i, (i+costumers1)) << " " << sum(costumers2, i+1, (i+1+costumers2)) << endl;

        left -= sum(costumers1, i, i+(costumers1*2));
        right -= sum(costumers2, i+1, i+1+(costumers2*2));

        costumers += costumers1;
        costumers += costumers2;

        cout << "Case #" << cur << ": ";
        cout << costumers << " " << left << " " << right << endl;  
        cur++;
    }

    return 0;
}
