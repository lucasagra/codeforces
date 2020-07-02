#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int chartonum(char a) {
    return ((int)a)-48;
}

int main(){
    int t; cin >> t;

    while(t--) {
        ll n; cin >> n;
        string num; cin >> num;
        string a(n, '1');
        string b(n, '1');
        bool flag = true;

        for(int i = 1; i < n; i++) {
            if(flag) {
                if(num[i] == '0') {
                    a[i] = '0';
                    b[i] = '0';
                }
                else if(num[i] == '1'){
                    a[i] = '1';
                    b[i] = '0';
                    flag = !flag;
                }
                else if(num[i] == '2') {
                    a[i] = '1';
                    b[i] = '1';
                }
            }
            else {
                if(num[i] == '0') {
                    a[i] = '0';
                    b[i] = '0';
                }
                else if(num[i] == '1'){
                    a[i] = '0';
                    b[i] = '1';
                }
                else if(num[i] == '2') {
                    a[i] = '0';
                    b[i] = '2';
                }
            }

        }

        cout << a << endl;
        cout << b << endl;
    }
    

    // 0%3 = 0 ->  0+0
    // 1%3 = 1 ->  1+0
    // 2%3 = 2 ->  1+1 / 2+0
    // 3%3 = 0 
    // 4%3 = 1
    return 0;
}