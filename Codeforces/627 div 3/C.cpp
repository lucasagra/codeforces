#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; cin >> t;

    while(t--) {
        string s; cin >> s;
        int resp = 1;

        int count = 1;
        int maxcount = 1;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == 'L') {
                count++;
                if(count > maxcount) maxcount = count;
            } else {
                count = 1;
            }
        }
        cout << maxcount << endl;
    }
    
    return 0;
}