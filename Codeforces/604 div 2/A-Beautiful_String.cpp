#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {

    int t; cin >> t;

    while(t--) 
    {
        bool flagstop = false;
        string s; cin >> s;
        int count = 0;
        int indexs = 0;
        int indexf = 0;

        if(s.size() == 1) {
            if(s[0] == '?') cout << 'a' << endl;
            else cout << s << endl;
            continue;
        }
        for(int i = 0; i < s.size(); i++) {
            if(i<s.size()-1 && s[i] != '?' && s[i+1] != '?')
            {
                if(s[i] == s[i+1]) {
                    flagstop = true;
                    break;
                }
            }
        
            if(s[i] == '?') {
                if(i == 0) {
                    s[i] = 'a';
                } 
                else
                {
                    s[i] = (((s[i-1]-'a')+1)%3) + 'a';
                }
                
                if(i < s.size()-1) {
                    if(s[i] == s[i+1]) {
                        s[i] = (((s[i] - 'a') + 1) % 3) + 'a';
                    }
                }
            }
            
        }
        if(flagstop){
            cout << -1 << endl;
            continue;
        }
        cout << s << endl;
    }

    return 0;
}