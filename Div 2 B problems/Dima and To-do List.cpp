#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {

    ll n, k, min, cur, i, j, count, stop;
    cin >> n >> k;
    ll nums[n];
    

    for(i = 0; i < n; i++)
        cin >> nums[i];

    min = 9999999999;
    int resp = 0;
    stop = n/k;
    for(i = 0; i < k; i++) {
        cur = 0;
        j = i;
        count = 0;
        while(count < stop) {
            cur += nums[j%n];
            j+=(k);
            if (cur>min) break;
            count++;
        }
        if (cur < min) {
            min = cur;
            resp = i+1;   
        }
    }

    cout << resp << endl;
    return 0;
}