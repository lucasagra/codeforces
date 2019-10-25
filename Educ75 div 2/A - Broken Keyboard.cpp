#include <bits/stdc++.h>

using namespace std;

int main() {

    int cases; cin >> cases;
    string s;
    for(int i = 0; i < cases; i++) 
    {

        int res[26] = {0};
        cin >> s;

        if (s.length() == 1) {
            cout << s[0] << endl;
            continue;
        }       
        for (int j = 0; j < s.length(); j++)
        {   
            if(j == s.length()-1) {
                res[s[j] - 'a'] = 1;
                break;
            }
            if (s[j] != s[j+1]){
                res[s[j]-'a'] = 1;
            }
            else if (res[s[j]-'a'] != 1 && s[j] == s[j+1])
            {
                res[s[j]-'a'] = -1;
                j++;
            }
        }

        for (int j = 0; j < 26; j++) {
            if(res[j] == 1) {
                printf("%c", 97+j);
            }
        }
        cout << endl;
    }


    return 0;
}