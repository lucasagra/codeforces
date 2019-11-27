#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll cases; cin >> cases;

    for (ll i = 0; i < cases; ++i)
    {
        ll nstrings; cin >> nstrings;
        string str[nstrings];
        ll even[nstrings] = {0};
        ll count1[nstrings] = {0};
        ll problems = 0;
        ll help = 0;
        for(ll j = 0; j < nstrings; ++j)
        {
            cin >> str[j];
            for(ll k = 0; k < str[j].length(); ++k) 
                if (str[j][k] == '1')
                    count1[j]++;
           
            if (str[j].length()%2 == 0) even[j] = 1;
            else help += str[j].length();   
        }
        for (ll j = 0; j < nstrings; ++j)
            if(even[j] == 1 && count1[j]%2 != 0) 
                problems++;
            
        problems %= 2;
        problems = max(0LL, problems-help);
        cout << nstrings-problems << endl;
    }

}