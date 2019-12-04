#include <bits/stdc++.h>

using namespace std;

pair<int, int> dif(int num) {
    if (num == 1) return {2, 3};
    if (num == 2) return {1, 3};
    if (num == 3) return {1, 2};
}
int main () {

    int dancers, dances; cin >> dancers >> dances;
    int colors[dancers] = {0};

    for(int i = 0; i < dances; i++) {
        int d1,d2,d3; cin >> d1 >> d2 >> d3;
        d1--;d2--;d3--;

        if(colors[d1] == 0 && colors[d2] == 0 && colors[d3] == 0) {
            colors[d1] = 1;
            colors[d2] = 2;
            colors[d3] = 3;
        }
        else {
            pair<int, int> auxpair;

            if (colors[d1] != 0){
                auxpair = dif(colors[d1]);
                colors[d2] = auxpair.first;
                colors[d3] = auxpair.second;
            } else if (colors[d2] != 0) {
                auxpair = dif(colors[d2]);
                colors[d1] = auxpair.first;
                colors[d3] = auxpair.second;
            } else if (colors[d3] != 0) {
                auxpair = dif(colors[d3]);
                colors[d1] = auxpair.first;
                colors[d2] = auxpair.second;
            }
        }
    }

    for (int i = 0; i < dancers-1; i++) {
        cout << colors[i] << " ";
    }
    cout << colors[dancers-1] << endl;

    return 0;
}