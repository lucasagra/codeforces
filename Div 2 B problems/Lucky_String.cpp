#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// 5 = abcda
// 3 = abc
// 6 = abcdabcdabcdabcda
//     12345678901234567
// a = 1, 5, 9, 13, 17
// b = 2, 6, 10, 14

int main () {

    ll n; cin >> n;
    string s;
    for(int i = 0; i < n/4; i++) s += "abcd";
    for(int i=0; i < n%4; i++) s += 'a'+ i;
    cout << s << endl;

    return 0;
}