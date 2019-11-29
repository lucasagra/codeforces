#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool cmp(vector<pair<string, int>> pins, string test) {
    for(int i = 0; i < pins.size(); i++) {
        if(test.compare(pins[i].first) == 0) return false;
    }
    return true;
}
char find_dif(vector<pair<string, int>> pins, pair<string, int> cur, char c)
{
    cur.first[0] = c;
    while(!cmp(pins, cur.first)){
        c += 1;
        cur.first[0] = c;
    }
    return c;
}
bool sorting(pair<string, int> p1, pair<string, int> p2)
{
    if (p1.second < p2.second)
        return 0;

    return 1;
}

char c = '0';
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        c = '0';
        int n; cin >> n;
        vector<pair<string, int>> pins;
        vector<int> aux;
        int k = 0;
        for(int i = 0; i < n; i++)
        {
            string s; cin >> s;
            pins.push_back({s, i});
    
        }
        sort(pins.begin(), pins.end());

        // for(int i = 0; i < n; i++)
        //     cout << pins[i].first << " " << pins[i].second << endl;
        // cout << endl;

        for (int i = 1; i < n; i++)
            aux.push_back(pins[i].first.compare(pins[i - 1].first));
     
        for (int i = 0; i < n - 1; i++) {
            if(aux[i] == 0) {
                pins[i+1].first[0] = find_dif(pins, pins[i+1], c);
                k++;
            }
        }

        // for (int i = 0; i < n; i++)
        //     cout << pins[i].first << " " << pins[i].second << endl;
        cout << k << endl;
        sort(pins.begin(), pins.end(), sorting);
        for(int i = 0; i < n; i++) {
            cout << pins[n-i-1].first << endl;
        }
    }
    return 0;
}