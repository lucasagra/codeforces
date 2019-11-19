#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n; cin >> n;
    ll sqr = ceil(sqrt(n));
    while(sqr > 0 && n%sqr != 0)  sqr--;
    cout << n/sqr + sqr - 2 << endl;
    return 0;
}