#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {
    
    int K, A, B; cin >> K >> A >> B;
    bool flag = false;
    for(int i = A; i <= B; i++) {
        if(i%K == 0) {
            flag = true;
            break;
        }
    }

    flag ? cout << "OK" << endl : cout << "NG" << endl;
    return 0;
}