#include <bits/stdc++.h>

using namespace std;

int main () {

    int n, k; cin >> n >> k;

    if (n == k) {
        cout << -1 << endl;
        return 0;
    }

    for (int i = 0; i < n-k; i++) cout << 1+((i + n-k-1) % (n - k)) << " ";
    for (int i = n-k+1; i <= n; i++) cout << i << " ";

    return 0;
}