#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main () {
    
    int a, b; cin >> a >> b;

    int min_num = b*10;

    while((int) (min_num * 0.08) != a) {
        // cout << min_num  << endl;
        min_num++;

        if((int) (min_num * 0.1) != b) break;
    }

    if((int)(min_num * 0.08) == a && (int) (min_num*0.1) == b) {
        cout << min_num << endl;
    } else {
        cout << -1 << endl;
    }


    return 0;
}