#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    vector<string> days;
    days.push_back("SUN");
    days.push_back("MON");
    days.push_back("TUE");
    days.push_back("WED");
    days.push_back("THU");
    days.push_back("FRI");
    days.push_back("SAT");

    string in; cin >> in;

    int i = 0;
    while(days[i] != in) i++;
    int r = 0 ;
    while(days[i%7] != "SUN") i++, r++;
    if(r == 0) r+=7;
    cout << r << endl;

    return 0;
}