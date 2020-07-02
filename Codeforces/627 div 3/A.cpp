#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int as[n];
        int max = 0;
        for(int i = 0; i < n; i++) {
            cin >> as[i];
            if (as[i] > max) max = as[i];
        }

        bool flag = false;
        for(int i = 0; i < n; i++) {
            if((max - as[i])%2 != 0) {
                flag = true;
                break;
            }
        }
        
        if(flag) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }



    }
    return 0;
}