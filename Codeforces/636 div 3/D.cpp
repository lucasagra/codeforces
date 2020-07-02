#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool condition(pair<int,int> p1, pair<int,int> p2) {
    return p1.second > p2.second;
}
int main() {
    int t; cin >> t;

    while(t--) {
        int n, k; cin >> n >> k;
        int nums[n];
        for(int i = 0 ; i < n; i++) cin >> nums[i];


        map<int,int> count;

        for(int i = 0; i < n/2; i++) {
            int sum = nums[i] + nums[n-i-1];
            if(count.find(sum) == count.end()) {
                count.insert({sum, 1});
            } else {
                count[sum]++;
            }
        }
        int max = 0;
        for(map<int,int>::const_iterator it = count.begin(); it != count.end(); ++it){
            
            std::cout << it->first << " " << it->second << "\n";
            if(it->second > max) max = it->second;
        }
        
    
        cout << n/2 - max << endl;
     
        cout << endl << endl;
    }

    return 0;
}