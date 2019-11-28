#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


bool solve(ll r, ll b, ll k)
{
    ll smaller = min(r, b);
    ll bigger = max(r, b);
    double factor = (double)bigger / smaller;

    if (bigger % smaller == 0)
    {

        ll fac = factor - 1;
        if (fac < k)
            return true;
    }
    else
    {
        ll g = __gcd(bigger, smaller);
        ll x = bigger-g;
        ll val = ceil((double)x / smaller);
        
        if (val < k) return true;
    }

    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll r, b, k;
        cin >> r >> b >> k;

        if (solve(r, b, k))
            cout << "OBEY" << endl;
        else
            cout << "REBEL" << endl;
    }
    return 0;
}