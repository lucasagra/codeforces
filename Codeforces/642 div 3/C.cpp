#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
 
    int t; cin >> t;

    while(t-- ) {
       ll n; cin >> n;

       ll perimeter = (n-1)*4;
       
       ll sum = 0;
       ll k = n/2;

       while(perimeter > 1) {
           sum += perimeter*k;
           k--;
           perimeter -= 8;
       }

        cout << sum << endl;
    }

    return 0;
}