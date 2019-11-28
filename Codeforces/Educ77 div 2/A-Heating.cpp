#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    int n; cin >> n;

    for(int i = 0; i < n; i++) 
    {
        int c, sum; cin >> c >> sum;

        int div = ceil((double)sum/c);

        int count = sum-(div-1)*c;

        ll resp = count*pow(div,2) + (c - count)*pow(div-1,2);
        // cout << count <<  " " << div <<  endl;
        cout << resp << endl;
    }

    return 0;
}