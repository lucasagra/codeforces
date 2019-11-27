#include <bits/stdc++.h>
#include <string>

using namespace std;

int main () {

    string s,t; cin >> s >> t;

    int count_s[26] = {0};
    int count_t[26] = {0};
    int resp = 0;

    for (char c: s) count_s[(int)c-'a']++;
    for (char c: t) count_t[(int)c-'a']++;

    for (int i = 0; i < 26; i++) {
        if (count_s[i] == 0 && count_t[i] != 0){
            cout << -1 << endl;
            return 0;
        }
        else if (count_t[i] != 0) {
            if (count_s[i] < count_t[i]) {
                resp += count_s[i];
            } else {
                resp += count_t[i];
            }
        }
    }

    cout << resp << endl;
}