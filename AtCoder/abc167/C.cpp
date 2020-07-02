#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

vector<tuple<ll, vector<ll>>> combination;
vector<tuple<ll, vector<ll>>> v;
ll N, M, X;
ll min_cost = 99999999999LL;

void check(const vector<tuple<ll, vector<ll>>>& v) {

    ll cur_cost = 0;
    ll cur_level[M] = {0};

    for (tuple<ll, vector<ll>> e : v) {
        cur_cost += get<0>(e);

        for(int j = 0; j < M; j++) {
            cur_level[j] += get<1>(e)[j];
        }
    }

    bool flag2 = true;
    for(int j = 0; j < M; j++) {
        if(cur_level[j] < X) {
            flag2 = false;
            break;
        }
    }
    if (flag2) {
        if(cur_cost < min_cost) min_cost = cur_cost;
    }
}

void go(int offset, int k) {
  if (k == 0) {
    check(combination);
    return;
  }
  for (int i = offset; i <= N - k; ++i) {
    
    combination.push_back(v[i]);
    go(i+1, k-1);
    combination.pop_back();
  }
}

int main () {

    cin >> N >> M >> X;

    ll c;
    for(int i = 0; i < N; i++) {
        cin >> c;
        vector<ll> aux;

        ll aux2;
        for(int j = 0; j < M; j++) {
            cin >> aux2;
            aux.push_back(aux2);
        }

        v.push_back(make_tuple(c,aux));
    }

    for(int i = 1; i <= N; i++) {
        go(0, i);
    }

    if(min_cost == 99999999999LL) cout << -1 << endl;
    else {
        cout << min_cost;
    }
    return 0;
}