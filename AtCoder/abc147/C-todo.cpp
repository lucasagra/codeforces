#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    int status[n+1] = {0};

    for(int i = 0; i < n; i++)
    {
        int k; cin >> k;
        for(int j = 0; j < k; j++)
        {
            int person, test; cin >> person >> test;
            if(test == 0) status[person] = 2;
            else
                if(status[person] == 0) status[person] = 1;
        }
    }
    int resp = 0;
    for(int i = 1; i <= n; i++) {
        if(status[i] == 1) resp++;
    }
    cout << resp << endl;
    return 0;
}