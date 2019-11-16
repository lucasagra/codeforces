#include <bits/stdc++.h>

using namespace std;

int main () {
    int d, n; cin >> d >> n;
    int month[n];
    for(int i = 0; i < n; i++) cin >> month[i];

    long long resp = 0;
    for(int i = 1; i < n; i++) {
        resp += (d-month[i-1]);      
    }
    cout << resp << endl;

    return 0;
}