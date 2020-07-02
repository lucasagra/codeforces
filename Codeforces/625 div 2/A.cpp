#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;

    int r[n], b[n];
    for(int i = 0; i < n; i++) {
        cin >> r[i];
    }    
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    int difa = 0, difb = 0;
    for(int i = 0; i < n; i++) {
        if(r[i] == 1 && b[i] == 0) difa++;
        if(r[i] == 0 && b[i] == 1) difb++;
    }
    // cout << difa << " " << difb << endl;
    if(difa == 0) {
        cout << -1 << endl;
    } else {
        int resp = 0;
        while (difa * resp <= difb) {
            resp++;
        }
        cout << resp << endl;
    }
    return 0;
}