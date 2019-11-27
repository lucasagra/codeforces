#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int cases; cin >> cases;
    while(cases--)
    {
        int n, k, d; cin >> n >> k >> d;
        int shows[n];
        for(int i=0;i<n;++i)
            cin >> shows[i];

        map<int,int> counts;
        
        int i = 0;
        int cur_qt = 0;
        while (i < d) {
            counts[shows[i]]++;
            if(counts[shows[i]] == 1) 
                cur_qt++;

            i++;
        }
        int min = cur_qt;
        int j = 0;
        while(i < n) 
        {
            counts[shows[i]]++;
            counts[shows[j]]--;

            if(shows[i] != shows[j]) 
            {
                if (counts[shows[j]] == 0)
                    cur_qt--;
                
                if (counts[shows[i]] == 1)
                    cur_qt++;
            }

            if (cur_qt < min)
                min = cur_qt;

            i++; j++;
        }
        cout << min << endl;
    }
    return 0;
}