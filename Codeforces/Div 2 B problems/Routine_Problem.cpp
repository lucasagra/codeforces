#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main () {

    int a, b, c, d; cin >> a >> b >> c >> d;
    int mmc, aux;
    if (c < d) {
        mmc = lcm(b, d);
        aux = mmc/b;
        a *= aux;
        b *= aux;
        aux = mmc/d;
        c *= aux;
        d *= aux;
    } else {
        mmc = lcm(a, c);
        aux = mmc / a;
        a *= aux;
        b *= aux;
        aux = mmc / c;
        c *= aux;
        d *= aux;
    }

    int x, y;

    if (a == c) {
        if (b > d) {
            x = b - d;
            y = b;
        } else {
            x = d - b;
            y = d;
        }
    } else {
        if (a > c) {
            x = a - c;
            y = a;
        } else {
            x = c - a;
            y = c;
        }
    }
    
    aux = gcd(x,y);
    x/=aux;
    y/=aux;
    printf("%d/%d\n", x, y);
    
    return 0;
}