#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {

    ll X; cin >> X;

    ll start = 100;

    int i = 0;
    while(start < X) {
        i++;
        start += (ll) start*0.01;
    }

    cout << i << endl;
    return 0;
}