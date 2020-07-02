#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void printvec(vector<ll> v, ll s, ll e, ll t) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << "   range:" << s << "-" << e << "   target:" << t<< endl;
}
void print(vector<ll> v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}
ll lookfor(vector<ll> &v, ll target, ll index) {
    bool flagstart = false;
    ll count0 = 0;
    ll start = 0;
    ll end = 0;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] == 0) {
            count0++;
            if(!flagstart) {
                flagstart = true;
                start = i;
            }
        } 
        else {
            count0=0;
            flagstart=false;
        }

        if(count0 == target) {
            end = i;
            v[(start+end)/2] = index;
            // printvec(v, start, end, target);
            index++;
            flagstart=false;
            count0=0;
        }
    }

    return index;
}
int main() {
    int t; cin >> t;

    while(t--) {
        ll n; cin >> n;

        vector<ll> a(n, 0);

        ll target = n;
        ll i = 1;
        bool flag = false;
        while(i <= n) {
            
            i = lookfor(a, target, i);


            if(flag) {
                target -= 1;
                flag = !flag;
            } 
            else {
                if(target%2 ==0) target = target/2;
                else target = (target/2)+1;

                flag = true;
            }
  
        }

        print(a);
    }

    return 0;
}