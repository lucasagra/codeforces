#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {

    string s; cin >> s;
    ll q; cin >> q;
    bool reversed = false;
    while(q--) {
        int op; cin >> op;
        if(op == 2) {
            int f; cin >> f;
            string c; cin >> c;
            if(f == 1) {
                if(reversed) {
                    s.append(c);
                } else {
                    s.insert(0, c);
                }
            } else if(f == 2) {
                if(reversed) {
                    s.insert(0, c);
                } else {
                    s.append(c);
                }
            }
        } else {
            reversed = !reversed;
        }
        
        // cout << s << endl;
    }
    if(reversed) {
        for (int i=s.length()-1; i>=0; i--) 
            cout << s[i];  
    } else {
        cout << s;
    }
    return 0;
}