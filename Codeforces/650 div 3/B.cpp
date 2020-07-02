#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int a[n];
        int count_wrongs = 0;
        int c_odd = 0;
        int c_even = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i]; 
            if(a[i]%2 != i%2) count_wrongs++;

            if(a[i]%2 == 0) c_even++;
            else c_odd++;
        }
        if(n%2 == 0) {
            if(c_even == c_odd && count_wrongs%2 == 0) {
                cout << count_wrongs/2 << endl;
            }
            else {
                cout << -1 << endl;
            }
        } else {
            if((c_even == c_odd + 1 || c_even == c_odd - 1) && count_wrongs%2 == 0) {
                cout << count_wrongs/2 << endl;
            }
            else {
                cout << -1 << endl;
            }
        }
       
    }   

    return 0;
}