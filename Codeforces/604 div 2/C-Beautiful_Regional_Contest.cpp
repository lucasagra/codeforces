#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int points[n];
        int gold;
        int goldqt = 0;
        for(int i = 0; i < n; i++){
            cin >> points[i];   
            if(i == 0) {
                gold = points[i];
            }
            if(points[i] == gold) goldqt++;
        }

        int medalsqt = (n/2)-1;
        while (medalsqt > 0 && points[medalsqt] == points[medalsqt + 1])
        {
            medalsqt--;
        }
        medalsqt++;
        int bqt = 1;
        int b = medalsqt-1;
        while (b > 0 && bqt <= goldqt)
        {
            while (b > 0 && points[b] == points[b-1]) {
                b--;
                bqt++;
            }
            if(bqt <= goldqt) {
                b--;
                bqt++;
            }
        }
        while (b > 0 && points[b] == points[b - 1])
        {
            b--;
            bqt++;
        }

        int rest = medalsqt - goldqt;
        int sqt = rest-bqt;

        if (goldqt >= sqt || goldqt >= bqt)
        {
            cout << 0 << " " << 0 << " " << 0 << endl;
            continue;
        }
        cout << goldqt << " " << sqt << " " << bqt << endl;

    }
    return 0;
}