#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {

    ll n, x, y; cin >> n >> x >> y;

    ll bcircle = x-1;
    ll circle = 1+y-x;
    ll acircle = n-y;
    
    cout << n << endl;

    for(int i = 1; i < n-1; i++) {
        ll dist = i+1;
        ll outside = max((bcircle+acircle+2)-dist, 0LL);
        ll inside =  circle;
        
        if(bcircle < dist-1) {
            inside -= max(dist-1-bcircle, 0LL);
        }
        if(acircle < dist-1) {
            inside -= max(dist-1-acircle, 0LL);
        }
        inside = max(0LL, inside);
        // cout << dist << " " <<  inside << endl<< endl;    

        
        cout << outside << " " << inside << endl;
    }

    return 0;
}