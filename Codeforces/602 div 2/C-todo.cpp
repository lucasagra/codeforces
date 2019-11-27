#include <bits/stdc++.h>
#include <string.h>
using namespace std;
typedef long long ll;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        //cout << s << endl;
        int memo[n];
        int bal = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') bal++;
            else bal--;
            memo[i] = bal;
            //cout << bal << " ";
        }
        //cout << endl;

        int start = 0, end = 0;
        vector<pair<int, int>> changes;

        while(start < n) {

            while (start < n && memo[start] >= 0)
                start++;
            end = start;
            while (end < n && memo[end] < 0)
                end++;

            if(start >= n) break;

            //cout << endl << start << " " << end << endl;
            reverse(s.begin() + start, s.begin() + end + 1);
            changes.push_back({start+1,end+1});

            int bal = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == '(')
                    bal++;
                else
                    bal--;
                memo[i] = bal;
                //cout << bal << " ";
            }
            //cout << endl <<  s << endl;
            start = end+1;
        }

        int cur_k = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(memo[i] == 0) cur_k++;
            //cout << memo[i] << " ";
        }

        int i = 0;
        while (i+1 < n && cur_k > k)
        {
            if(memo[i] == 0) {
                changes.push_back({i+1,i+2});
                cur_k--;
                i++;
            }
            i++;
        }
        i = 0;

        while(i+1 < n && cur_k < k) {
            if (memo[i] == memo[i+1]+1 && memo[i+1] != 0)
            {
                changes.push_back({i + 1, i + 2});
                memo[i]-=2;
                if(memo[i]==0) {
                    cur_k++;
                } else {
                    i-=2;
                }
            }
            i++;
        }
        
        cout << changes.size() << endl;
        for (int i = 0; i < changes.size(); i++)
        {
            cout << changes[i].first << " " << changes[i].second << endl;
        }

        // for (int i = 0; i < s.size(); i++)
        // {
        //     cout << memo[i] << " ";
        // }
        // cout << endl << s << endl;
    }
    return 0;
}