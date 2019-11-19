#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n; cin >> n;
    int * arr = (int*) malloc(sizeof(int)*1000001);
    memset(arr, 0, sizeof(int) * 1000001);
    vector<ll> vec;
    vector<int> resp;
    ll rem_inside = 0L;

    ll a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a < 0) 
        {
            if (arr[abs(a)] != 1) 
            {
                printf("%d\n", -1);
                return 0;
            }
            else
            {
                arr[abs(a)]++;
                rem_inside--;
                if(rem_inside == 0) {
                    for(int j = 0; j < vec.size(); j++)
                    {
                        if (arr[vec[j]] != 2)
                        {
                            printf("%d\n", -1);
                            return 0;
                        }
                        arr[vec[j]] = 0;
                    }
                    resp.push_back(vec.size()*2);
                    vec.clear();
                }
            }
        } 
        else 
        {
            if(arr[a] == 0) 
            {
                rem_inside++;
                vec.push_back(a);
                arr[a]++;
            }
            else 
            {
                printf("%d\n", -1);
                return 0;
            }
        }
    }

    if(vec.size() != 0) 
    {
        for (int j = 0; j < vec.size(); j++)
        {
            if (arr[vec[j]] != 2)
            {
                printf("%d\n", -1);
                return 0;
            }
            arr[vec[j]] = 0;
        }
        resp.push_back(vec.size());
    }

    printf("%d\n", resp.size());
    for (int i = 0; i < resp.size(); i++)
    {
        printf("%d ", resp[i]);
    }
    return 0;
}