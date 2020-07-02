#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; cin >> t;

    while(t--) {
        ll n, k; cin >> n >> k;

        ll pos0 = 1;
        ll aux = 1;
        ll sum = 1;

        while(sum < k) {
            aux += 1;
            sum += aux;
            pos0++;
        }
        ll pos1 = k-(sum-aux)-1;

        string s(n, 'a');
        s[n-pos0-1] = 'b';
        s[n-pos1-1] = 'b';
        
        cout << s << endl; 
    }
   
    return 0;
}