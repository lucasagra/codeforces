#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int t; cin >> t;
    while(t--) 
    {
        ll a, b; cin >> a >> b;

        if(a == b)  { cout << 0 << endl; continue; }

        ll dif = abs(b-a);
        ll resp = 0L;

        if(dif >= 5){
            resp += dif/5;
            dif %= 5;
        }
        if(dif >= 2) {
            resp += dif/2;
            dif %= 2;
        }
        resp += dif;

        cout << resp << endl;
    }
    return 0;
}