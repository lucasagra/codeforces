#include <bits/stdc++.h>
using namespace std;

int main () {

    int n; cin >> n;
    map<pair<string,string>, int> m;

    for(int i = 0; i < n; i++) {
        string s1, s2; cin >> s1 >> s2;
        m[make_pair(s1,s2)]++;
    }

    cout << m.size() << endl;

    return 0;
}