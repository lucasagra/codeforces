#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, t; cin >> n >> t;
    t--;
    int taste, time;
    double ratio[n];
    vector<pair<double, pair<int,int>>> foods;
    
    int big, bindex = 0;
    for(int i = 0; i < n; i++) {
        cin >> time >> taste;

        if(taste > big) {
            big = taste;
            bindex = i;
        }

        foods.push_back({(double)taste/time, {time, taste}});
        //cout << foods[i].first << " " << foods[i].second.first << " " << foods[i].second.second << endl;
    }
    //cout << endl;

    sort(foods.begin(), foods.end());
    reverse(foods.begin(), foods.end());

    

    ll best = foods[bindex].second.second;
    foods.erase(foods.begin()+bindex);

    for (int i = 0; i < n-1; i++)
    {
        printf("%.2lf %d %d\n", foods[i].first,
               foods[i].second.first, foods[i].second.second);
    }
    int i = 0;
    int next_time = foods[i].second.first;
    int cur_time = 0;

    while(i < n-2 && cur_time + next_time < t) {
        cur_time += next_time;
        best += foods[i].second.second;
        i++;
        next_time = foods[i].second.first;
    }
    if (cur_time + next_time < t) {
        cur_time += next_time;
        best += foods[i].second.second;
    }

        cout << cur_time << endl;
    cout << best << endl;
    return 0;
}