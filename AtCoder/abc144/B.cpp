#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{

    int n; cin >> n;
    
    if (n > 81) {
        cout << "No" << endl;
        return 0;
    }

    for(int i = 1; i < 10; i++) {
        if(n%i == 0) {
            if(n/i < 10) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}