#include <bits/stdc++.h>
typedef long long ll;
using namespace std;


int main () {

    int card[3][3];
    int card2[3][3];

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> card[i][j];
            card2[i][j] = 0;
            // cout << card[i][j] << " ";
        }
        // cout << endl;
    }

    int n; cin >> n;
    int b[101] = {0};
    int aux;
    for(int i = 0; i < n; i++) {
        cin >> aux;
        b[aux] = 1;
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            card2[i][j] = b[card[i][j]];
            // cout << card2[i][j] << " ";
        }
        // cout << endl;
    }

    string ans = "Yes";
           if (card2[0][0] && card2[0][1] && card2[0][2]) {
    } else if (card2[1][0] && card2[1][1] && card2[1][2]) {
    } else if (card2[2][0] && card2[2][1] && card2[2][2]) {
    } else if (card2[0][0] && card2[1][0] && card2[2][0]) {
    } else if (card2[0][1] && card2[1][1] && card2[2][1]) {
    } else if (card2[0][2] && card2[1][2] && card2[2][2]) {
    } else if (card2[0][0] && card2[1][1] && card2[2][2]) {
    } else if (card2[2][0] && card2[1][1] && card2[0][2]) {
    } else {
        ans = "No";
    }

    cout << ans << endl;
    return 0;
}