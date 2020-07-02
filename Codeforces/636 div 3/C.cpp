#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        ll nums[n];
        for(int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        ll sum = 0LL;

        int i = 0;
        ll cur_max = 0LL;
        ll cur_max2 = -999999999999LL;

        while(i < n) {
            while(i < n && nums[i] > 0) {
                if(nums[i]>cur_max) cur_max = nums[i];
                i++;
            }
            // cout << cur_max << " ";
            sum += cur_max;
            cur_max = 0LL;

            while(i < n && nums[i] < 0) {
                if(nums[i] > cur_max2) cur_max2 = nums[i];
                i++;
            }
            // cout << cur_max2 << " ";
            if(cur_max2 != -999999999999LL) sum += cur_max2;
            cur_max2 = -999999999999LL;
        }

        cout << sum << endl;

    }

    return 0;
}