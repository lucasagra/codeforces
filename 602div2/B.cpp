#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;  cin >> t;
    while (t--)
    {
        int n; cin >> n;
        int nums[n];
        int resp[n];
        bool vis[n+1] = {false};
        bool skipflag = false;
        for(int i = 0; i < n; i++) 
        {
            cin >> nums[i];
            resp[i] = nums[i];
            if(!skipflag && nums[i] < i+1) {
                cout << -1 << endl;
                skipflag = true;
            }
        }
        if(skipflag) {
            continue;
        }

        vis[0] = true;
        vis[nums[0]] = true;
        resp[0] = nums[0];
        int cur = 1;
        for(int i = 1; i < n; i++) {
            if(nums[i] > nums[i-1]) 
            {
                vis[nums[i]] = true;
            }
            else 
            {
                resp[i] = cur;
                cur++;
            }

            while(vis[cur] == true) {
                cur++;
            }
        }

        for(int i = 0; i < n; i++) {
            cout << resp[i] << " ";
        }
        cout << endl;
    }
    return 0;
}