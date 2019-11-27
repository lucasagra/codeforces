#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main () {

    int n, x0, y0, x, y;
    vector<pair<int, int>> coords;
    cin >> n >> x0 >> y0;
    
    for (int i = 0; i < n; ++i) {
        cin >> x >> y;
        coords.push_back({x, y});
    }
    
    int resp = 0;
    for(vector<pair<int,int>>::iterator i = coords.begin(); i < coords.end(); i++) {
        int x1 = (*i).first;
        int y1 = (*i).second;
        resp++;
        for(vector<pair<int, int>>::iterator j = i+1; j < coords.end(); j++) {
            int x2 = (*j).first;
            int y2 = (*j).second;
            
            if ((x1-x0) * (y2-y0) == (x2-x0) * (y1-y0)) {
                coords.erase(j);
                    j--;
            }
        }
    }

    cout << resp << endl;
    return 0;
}
