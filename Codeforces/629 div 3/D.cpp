#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int switchcolor(int n){
    return (int)(!((bool)(resp[n-1]-1))) +1;
}

int main(){
    int t; cin >> t;

    while(t--) {
        ll n; cin >> n;
        ll fig[n];
        vector<ll> resp(n, 1);

        ll totalcolors = 1;
        bool lastcolor = true;

        for(ll i = 0L; i < n; i++) {
            cin >> fig[i];
            
            if(i>0) {
                if(fig[i] == fig[i-1]) {
                    resp[i] = (int)!lastcolor +1;
                }
                else {
                    resp[i] = (int)lastcolor +1;
                    lastcolor = !lastcolor;
                    totalcolors = 2;
                }
            }
        }

        for(int i = 0; i < n; i++)
            cout << resp[i] << " ";
        cout << endl;

        if(fig[n-1] != fig[0] && resp[n-1] == resp[0]) {
            // if(resp[n-1] == resp[n-2]) {
            //     resp[n-1] = (int)(!((bool)(resp[n-1]-1))) +1;
            // }

            // else {
                resp[n-1] = 3;
                totalcolors++;
            // }
        }
        
        cout<< totalcolors << endl;
        for(int i = 0; i < n; i++)
            cout << resp[i] << " ";
        cout << endl;
    }
    return 0;
}