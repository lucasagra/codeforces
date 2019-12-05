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
        int gold_qt = 0;
        for(int i = 0; i < n; i++){
            cin >> points[i];   
            if(i == 0) {
                gold = points[i];
            }
            if(points[i] == gold) gold_qt++;
        }

        int medals_qt = (n/2)-1;
        while (medals_qt > 0 && points[medals_qt] == points[medals_qt + 1])
            medals_qt--;
        
        medals_qt++;
        int bronze_qt = 1;
        int b = medals_qt-1;
        while (b > 0 && bronze_qt <= gold_qt)
        {
            while (b > 0 && points[b] == points[b-1]) {
                b--;
                bronze_qt++;
            }
            if (bronze_qt <= gold_qt)
            {
                b--;
                bronze_qt++;
            }
        }
        while (b > 0 && points[b] == points[b - 1])
        {
            b--;
            bronze_qt++;
        }

        int silver_qt = medals_qt - gold_qt - bronze_qt;

        if (gold_qt >= silver_qt || gold_qt >= bronze_qt)
        {
            cout << 0 << " " << 0 << " " << 0 << endl;
            continue;
        }
        cout << gold_qt << " " << silver_qt << " " << bronze_qt << endl;

    }
    return 0;
}