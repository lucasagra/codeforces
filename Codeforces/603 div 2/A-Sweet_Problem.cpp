#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {

    int t; cin >> t;
    while(t--)
    {
        vector<ll> col;
        ll r, g, b; cin >> r >> g >> b;
        col.push_back(r);
        col.push_back(g);
        col.push_back(b);
        sort(col.begin(), col.end());

        ll resp = 0;

        ll dif = col[2]-col[1];
        if (dif >= col[0]) {
            col[2] -= col[0];
            resp += col[0];

            resp+= min(col[1], col[2]);
        } else {
            col[2] -= dif;
            col[0] -= dif;
            resp += dif;

            col[1] -= col[0]/2;
            col[2] -= col[0]/2;
            resp += 2*(col[0]/2);
            resp += min(col[1], col[2]);
        }


        // resp += col[0];
        cout << resp << endl;
        //cout << col[0] << " " <<  col[1] << " " << col[2] << endl;
        

    }
    return 0;
}