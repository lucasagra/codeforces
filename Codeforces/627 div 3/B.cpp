#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int as[n];
        for(int i = 0; i < n; i++) {
            cin >> as[i];
        }
        bool flag = false;
        for(int i = 0; i < n-2; i++) {
            int cur = as[i];
            for(int j = i+2; j < n; j++) {
                int next = as[j];

                if(cur == next) {
                    flag = true;
                    break;
                }
            }
            if(flag) break;
        }
               
        if(flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }

    }
    
    return 0;
}