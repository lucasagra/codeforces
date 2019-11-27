#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t; cin >> t;
    while(t--) 
    {
        int n, m; cin >> n >> m;
        vector <pair<int, int>> w;
        int weight;

        ll cost = 0;
        for(int i = 1; i <= n; i++) 
        {
            cin >> weight;
            cost += weight;
            w.push_back({weight, i});
        }

        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        if (m < n)
        {
            cout << -1 << endl;
            continue;
        }

        sort(w.begin(), w.end());

        cost *= 2;
        ll rem = m - n;
        cost += (w[0].first + w[1].first)*rem;
        cout << cost << endl;

        for(int i = 0; i < n; i++)
            cout << w[i].second << " " << w[(i+1)%n].second << endl;
    
        for (int i = 0; i < rem; i++)
            cout << w[0].second << " " << w[1].second << endl;
        
    }
    return 0;
}