#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void print(string s) {
    for(int i = 0; i < s.size(); i++) {
        cout << s[i];
    }
    cout << endl;
}
void checkinit(string &s, ll k, ll &resp) {
    if(s[0] == '1') return;

    for(ll i = 0; i < k+1 && i < s.size(); i++) {
        if(s[i] == '1') return;
    }

    s[0] = '1';
    resp++;
}   

void checkend(string &s, ll k, ll &resp) {
    if(s[s.size()-1] == '1') return;

    ll j = 0;
    for(ll i = s.size()-1; j < k+1 && i >= 0; i--, j++) {
        if(s[i] == '1') return;
    }

    s[s.size()-1] = '1';
    
    resp++;
}   

int main() {
 
    int t; cin >> t;

    while(t--) {
        ll n, k; cin >> n >> k;
        string s; cin >> s;

        ll resp = 0;
        checkinit(s, k, resp);
        checkend(s, k, resp);

        ll i = 0;

        while(i < n) {

            ll found0 = 0;
            while(s[i] == '0') {
                found0++;
                i++;
            }
            resp += max((found0-k)/(k+1), 0LL);

            i++;
        }

        // print(s);
        cout << resp << endl;
    }

// 1001001001001
// 1001001001
    return 0;
}