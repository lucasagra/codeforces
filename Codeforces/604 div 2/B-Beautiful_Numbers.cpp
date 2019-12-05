#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        int nums[n];
        int pos1 = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> nums[i];
            if(nums[i] == 1) pos1 = i;
        }

        int l = pos1-1;
        int r = pos1+1;

        int aux[n];
        aux[0] = 1;

        int k = 1;
        while(l != -1 || r != n) {
            if(l == -1){
                aux[k] = nums[r];
                r++;
            }
            else if(r == n) {
                aux[k] = nums[l];
                l--;
            }
            else{
                if(nums[l] < nums[r]) {
                    aux[k] = nums[l];
                    l--;
                }
                else {
                    aux[k] = nums[r];
                    r++;
                }
            }
            k++;
        }

        int m = 1;
        cout << 1;
        for (int i = 1; i < n; i++)
        {
            if(aux[i] > m) m = aux[i];
            max(m, aux[i]) == i+1? cout << 1 : cout << 0;
        }

        cout << endl;

    }
    return 0;
}