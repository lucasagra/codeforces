#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void print_vector(vector<int> v) {
    cout << v[0] << " " << v[1] << " " << v[2] << endl;
}

void print_map(int num, map<int, vector<vector<int>>> mp) {
    for(int i = 0; i < mp[num].size(); i++){
        print_vector(mp[num][i]);
    }    
}

int count_apparance(int i, map<int, vector<vector<int>>> mp) 
{
    return mp[i].size();
}

bool vec_contains(vector<int> v, int n)
{
    for(int i = 0; i < v.size(); i++) 
    {
        if(v[i] == n) return true;
    }
    return false;
}
int dif(vector<int> vec1, vector<int> vec2) 
{
    int dif = 3;
    if (vec_contains(vec2, vec1[0]))
        dif--;
    if (vec_contains(vec2, vec1[1]))
        dif--;
    if (vec_contains(vec2, vec1[2]))
        dif--;

    return dif;
}

vector<int> next_vec(int num, vector<int> prev_vec, map<int, vector<vector<int>>> mp)
{
    for(int i = 0; i < mp[num].size(); i++) 
    {
        if(dif(prev_vec, mp[num][i]) == 1) 
        {
            return mp[num][i];
        }
    }
}

int next_num(vector<int> prev_vec, vector<int>cur_vec) 
{
    for(int i = 0; i < 3; i++) {
        if(!vec_contains(cur_vec, prev_vec[i])) {
            return cur_vec[i];
        }
    }
}

int main()
{
    int n; cin >> n;
    map<int, vector<vector<int>>> m;

    for(int i = 0; i < n-2; i++) 
    {
        int a, b, c; cin>>a>>b>>c;
        vector<int> v{a,b,c};
        m[a].push_back(v);
        m[b].push_back(v);
        m[c].push_back(v);
    }
    
    for(int i = 1; i <= n; i++)
    {   
        cout << "map " << i << endl;
        print_map(i, m);
        cout << endl;
    }

    int cur = 0;
    for(int i = 1; i <= n; i++) 
    {
        if(m[i].size() == 1) 
        {
            cur = i;
            break;
        }
    }

    vector<int> resp;
    resp.push_back(cur);
    vector<int> cur_vec = m[cur][0];

    vector<int> vec = next_vec(cur, cur_vec, m);
    print_vector(vec);
    // for(int i = 0; i < n-1; i++) {


    // }


    return 0;
}