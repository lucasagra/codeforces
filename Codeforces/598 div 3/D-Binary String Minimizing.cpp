#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void swap(int a, int b, int arr[]) {
    
}
int main () {

    int t; cin >> t;

    while(t--) {
        ll n, k; cin >> n >> k;
        string s; cin >> s;

        ll count1 = 0;
        ll countk = 0;
        string res = s.c_str();
        //cout << s << endl << res << endl;

        ll rIndex = 0;
        for(ll i = 0L; i < n; i++) {
            if(s[i] == '1') {
                count1++;
            } else {
                countk += count1;
                if (countk <= k) 
                {
                    res[i] = '1';
                    res[rIndex] = '0';
                } 
                else 
                {
                    ll over = countk-k;
                    for(ll j = rIndex; j < rIndex+over; j++) res[j] = '1';
                    res[rIndex+over] = '0';
                    for(ll j = rIndex+over+1; j <= i; j++) res[j] = '1';
                    break;
                }
                rIndex++;
            }
        }
        // 0111111110 8
        // 0111111011 10

        cout << res << endl;

    }

    return 0;
}