#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


bool check_case(int n, int a[], int b[]) {
    bool flagstarted = false;
    int dif = 0;

    for (int j = 0; j < n; j++)
        if (a[j] > b[j]) return false;

    if (n == 1) 
        return true;

    int i = 0;
    while (i < n)
    {   
        if(a[i] != b[i]) 
        {
            if(!flagstarted) 
            {
                flagstarted = true;
                dif = b[i] - a[i];
            }
            else
            {
                if(b[i] - a[i] != dif) return false;
            }
        }
        else
        {
            if(flagstarted)
            {
                i++;
                break;
            }
        }
        i++;
    }

    while(i < n) {
        if (a[i] != b[i])
            return false;
        i++;
    } 

    return true;
}

int main()
{
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        int as[n];
        int bs[n];
        for (int i = 0; i < n; i++) cin >> as[i];
        for (int i = 0; i < n; i++) cin >> bs[i];
        
        if(check_case(n, as, bs)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}