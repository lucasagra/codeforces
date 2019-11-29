#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        vector<ll> r;
        r.push_back(0);
        for(int i = 1; i*i <= n; i++) {
            r.push_back(i);
            if(i != n/i)
                r.push_back(n/i);
        }
        cout << r.size() << endl;
        sort(r.begin(), r.end());
        for(int i = 0; i < r.size(); i++)
            cout << r[i] <<  " ";
        cout << endl;
    }
    return 0;
}