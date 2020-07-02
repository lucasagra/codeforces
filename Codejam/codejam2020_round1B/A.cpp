#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main () {

    int t; cin >> t;
    int cur = 1;

    while(cur <= t) {

        ll x, y; cin >> x >> y;

        if((x+y)%2 == 0) {
            cout << "Case #" << cur << ": ";  
            cout << "IMPOSSIBLE" << endl;
            cur++;
            continue;
        }

        string s;

        ll power = 1;
        ll sum = 1;
        while(sum < abs(x)+abs(y)) {
            power += power;
            sum += power;
        }
        
        while(x != 0 || y != 0) {
            if(abs(x) > abs(y)) {
                if(x > 0) {
                    x -= power;
                    power /= 2;
                    s.push_back('E');
                } else {
                    x += power;
                    power /= 2;
                    s.push_back('W');
                }
            } else {
                if(y > 0) {
                    y -= power;
                    power /= 2;
                    s.push_back('N');
                } else {
                    y += power;
                    power /= 2;
                    s.push_back('S');
                }
            }
        }

        cout << "Case #" << cur << ": ";  
        for(int i = 0; i < s.length(); i++) {
            cout << s[s.length()-1-i];
        }
        cout << endl;
        cur++;
    }
    return 0;
}