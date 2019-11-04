#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void swap(int a, int b, int arr[]) {
    
}
int main () {

    int t; cin >> t;

    while(t--) {
        int n; cin >> n;

        int perm[n];
        bool done[n-1] = {false};
        for(int i = 0; i < n; i++) cin >> perm[i];

        for(int i = 0; i < n; i++) 
        {   
            int j = 0;
            for(j; j < n; j++)
            {
                if (perm[j] == i+1) {
                    break;
                }
            }

            if(j == i) 
            {
                done[j] = true;
                continue;
            } 
            else if (j < i){
                continue;
            }

            while(j > i && !done[j-1]) {
                if(perm[j-1] > perm[j])
                {
                    swap(perm[j], perm[j-1]);
                    done[j-1] = true;
                }
                j--;
            }
        }

        for(int i = 0; i < n-1; ++i) cout << perm[i] << " ";
        cout << perm[n-1] << endl;

    }

    return 0;
}