#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    string s; cin >> s;

    int m = n/2;

    if(m == n) {
        cout << "No" << endl;
        return 0;
    } 
    if (m*2 != n) {
        cout << "No" << endl;
        return 0;
    } 
   
    for(int i = 0; i< n/2; i++){
        if(s[i] != s[i+m]) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}