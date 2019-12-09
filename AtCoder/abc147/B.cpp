#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s; cin >> s;
    int resp = 0;
    for(int i = 0; i < s.size()/2; i++) {
        if (s[i] != s[s.size()-1-i]) resp++;
    }
    cout << resp;
    return 0;
}