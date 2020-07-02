#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {
    
    string a, b; cin >> a >> b;

    bool flag = true;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) flag = false;
    }

    flag ? cout << "Yes" << endl : cout << "No" << endl;
    return 0;
}