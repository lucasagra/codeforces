#include <iostream>
#define lli long long int

using namespace std;

int main() {
    lli a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    if (b >> 1LL >= a)
      cout << a << endl;
    else
      cout << (a + b) / 3LL << endl;
    return 0;
}
// 27 12 -- 12
/*
6 6
4 5
3 3
1 2
0 0
*/