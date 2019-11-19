#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main () {

    int a, b; cin >> a >> b;

    if(a > 9 || a < 1 || b < 1 || b > 9) {
        cout << -1 << endl;
        return 0;
    }

    else {
        cout << a*b << endl;
    }

    return 0;
}