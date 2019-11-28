#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool solve(ll a, ll b)
{
    if (a == 0 && b == 0)
        return true;
    if (a == 1 && b == 2)
        return true;
    if (a == 2 && b == 1)
        return true;

    if (a == b && a % 3 == 0)
        return true;
    
    if((a != 0 && b != 0) && (2*a == b || 2*b == a)) 
        return true;
    
    ll dif = abs(a - b);

    if (min(a, b) - dif < 3)
        return false;
    else
    {
        if ((min(a, b) - dif) % 3 == 0)
            return true;
        else
            return false;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (solve(a, b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}