#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        s[i] -= 65;
        s[i] += n;
        s[i] %= 26;
        s[i] += 65;
    }

    cout << s << endl;
    return 0;
}