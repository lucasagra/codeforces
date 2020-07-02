#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {

    int n, m; cin >> n >> m;
    int s[m], c[m];
    int number[n];

    if(m == 0) {
        if(n == 1) {
            cout << 0 << endl;
        } else if (n == 2) {
            cout << 10 << endl;
        } else {
            cout << 100 << endl;
        }
        return 0;
    }
    unordered_map<int, int> mp;
    bool flag = false;
    for(int i = 0; i < m; i++) {
        cin >> s[i] >> c[i];

        if(mp.find(s[i]) != mp.end() && mp[s[i]] != c[i]){
            flag = true;
        }
        mp[s[i]] = c[i];
    }
  
    for(int i = 0; i < n; i++) {
        number[i] = -1;
    }

    for(int i = 0; i < m; i++) {
        if(s[i] > n) {
            cout << "-1" << endl;
            return 0;
        }

        number[s[i] - 1] = c[i];
    }

    if(number[0] == 0 && n != 1) {
        flag = true;
    }

    if(flag) {
        cout << "-1" << endl;
        return 0;
    }

    for(int i = 0; i < n; i++) {
        if(number[i] == -1) {
            if(i == 0) {
                number[i] = 1;
            } else number[i] = 0;
        }
        cout << number[i];
    }

    cout << endl;


    return 0;
}