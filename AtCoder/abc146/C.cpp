#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll biggest_digit(ll A, ll B, ll X)
{
    ll n = 1LL;
    int digits = 1;
    while (X >= (A * n) + B * digits)
    {
        n *= 10;
        digits++;
    }

    return n / 10;
}

int num_digits(ll A, ll B, ll X)
{
    ll n = 1LL;
    int digits = 1;
    while (X >= (A * n) + B * digits)
    {
        n *= 10;
        digits++;
    }

    return digits - 1;
}

ll expp(int n)
{
    ll r = 1LL;
    for (int i = 1; i < n; i++)
    {
        r *= 10LL;
    }
    return r;
}

ll calc_max(ll A, ll B, ll X, int digits)
{
    ll r = 0;
    for (int i = 0; i < digits; i++)
    {
        ll aux = expp(digits - i);

        for (int j = 9; j > 0; j--)
        {
            if (X >= (((aux * j) + r) * A) + (B * digits))
            {
                r += aux * j;
                //cout << "+" << aux << "*" << j << " = " << aux*j << endl;
                break;
            }
        }
    }

    return r;
}

int main()
{
    ll A, B, X;
    cin >> A >> B >> X;

    ll bignum = biggest_digit(A, B, X);
    int num_digs = num_digits(A, B, X);

    if (num_digs >= 10)
    {
        cout << 1000000000LL << endl;
        return 0;
    }

    ll resp = calc_max(A, B, X, num_digs);
    cout << resp << endl;
    return 0;
}