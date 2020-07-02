#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {

    ll A, B, N; cin >> A >> B >> N;
    if(N >= B-1) N = B-1;
    cout << (floor(A*N/B)- A*floor(N/B)) << endl;

    return 0;
}