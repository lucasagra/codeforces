#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {

    int t; cin >> t;
    while(t--) {
        string b; cin >> b;

        cout << b[0] << b[1];
        for(int i = 3; i < b.size(); i+=2) {
            cout << b[i];
        }
        cout << endl;
    }

    return 0;
}

// acb
// accb