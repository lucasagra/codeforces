#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool compare(tuple<int,int,int,int> a, tuple<int,int,int,int>b) {
    if(get<2>(a)-get<1>(a) > get<2>(b)-get<1>(b)) return true;

    else if(get<2>(a)-get<1>(a) < get<2>(b)-get<1>(b)) return false;

    else return get<0>(a) > get<0>(b);
}
int main () {
    vector<tuple<int, int, int, int>> v;

    ll N, M, Q; cin >> N >> M >> Q;
    ll score = 0;
    ll a, b, c, d;

    int arr[N+1] = {0};
    arr[1] = 1;

    for(int i = 0; i < Q; i++) {
        cin >> a >> b >> c >> d;
        v.push_back(make_tuple(d, a, b, c));
    }
    sort(v.begin(), v.end(), compare);

    for(int i = 0; i < Q; i++) {
        // cout << get<0>(v[i]) << " " << get<1>(v[i])<< " " << get<2>(v[i]) << " " <<get<3>(v[i]) <<endl;

        int target = get<3>(v[i]);
        int a = get<1>(v[i]);
        int b = get<2>(v[i]);
        int point = get<0>(v[i]);

        if(arr[a] != 0 && arr[b] != 0 && arr[b]-arr[a] == target) {
            score+=point;
            continue;
        } else {
            if(arr[b] == 0 && (target+arr[a] <= M)) {
                arr[b] = target + arr[a];
                if(arr[a] == 0) {
                    arr[a] = arr[b] - target;
                }
                score += point;
            } else if(arr[a] == 0 && arr[b] != 0 && (arr[b]-target) > 1) {
                arr[a] = arr[b]-target;
                score += point;
            }
        }
        
    }

    cout << score << endl;
    return 0;
}

// 1 2 3 4

// 1 2 4 x
 