#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main () {
    int a, b, c, d; cin >> a >> b >> c >> d;
    double asucc = (double)a / b;
    double afail = 1.0 - asucc;
    double bfail = 1.0 - ((double)c / d);
    double res = asucc;

    double aux = asucc;
    for(int i = 0; i < 20000; i++) {
        aux *= afail;
        aux *= bfail;
        res += aux;
    }

    printf("%.12lf\n", res);

    return 0;
}