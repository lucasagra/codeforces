#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll MAX = 1000000000LL;
ll MIN = -1000000000LL;

ll searchRight(ll x, ll y, ll offset) {
    //checa A para direita enquanto A != 1
    // MISS -> A = A/2
    // HIT -> x += A

    string in;
    while(offset >= 1) {
        ll test = (x+offset) > MAX? MAX: (x+offset);
        cout << test << " " << y << endl;
        cout << flush;
        cin >> in;

        if(in.compare("MISS") == 0) {
            offset /= 2;
        } else if (in.compare("HIT") == 0) {
            x += offset;
            x = min(x, MAX);
        } else {
            return 1000000001LL;
        }
    }

    return x;
}

ll searchLeft(ll x, ll y, ll offset) {

    string in;
    while(offset >= 1) {
        ll test = (x-offset) < MIN? MIN: (x-offset);
        cout << test << " " << y << endl;
        cout << flush;
        cin >> in;
        if(in.compare("MISS") == 0) {
            offset /= 2;
        } else if (in.compare("HIT") == 0) {
            x -= offset;
            x = max(x, MIN);
        } else {
            return 1000000001LL;
        }
    }

    return x;
}

ll searchUp(ll x, ll y, ll offset) {

    string in;
    while(offset >= 1) {
        ll test = (y+offset) > MAX? MAX: (y+offset);
        cout << x << " " << test << endl;
        cout << flush;
        cin >> in;
        if(in.compare("MISS") == 0) {
            offset /= 2;
        } else if (in.compare("HIT") == 0) {
            y += offset;
            y = min(y, MAX);
        } else {
            return 1000000001LL;
        }
    }

    return y;
}

ll searchDown(ll x, ll y, ll offset) {

    string in;
    while(offset >= 1) {
        ll test = (y-offset) < MIN? MIN: (y-offset);
        cout << x << " " << test << endl;
        cout << flush;
        cin >> in;
        if(in.compare("MISS") == 0) {
            offset /= 2;
        } else if (in.compare("HIT") == 0) {
            y -= offset;
            y = max(y, MIN);
        } else {
            return 1000000001LL;
        }
    }

    return y;
}

pair<ll, ll> getfirst() {
    string in;
    for(ll i = -750000000LL; i < 1000000000LL; i += 250000000LL) {
        for(ll j = -750000000LL; j < 1000000000LL; j+= 250000000LL) {
            cout << i << " " << j << endl;
            cout << flush;
            cin >> in;
            if(in.compare("MISS") == 0) {
                continue;
            } else if (in.compare("HIT") == 0) {
                return make_pair(i, j);
            } else {
                return make_pair(1000000001LL, 1000000001LL);
            }
        }
    }
}
// 1000000000
//  333333333
int main () {

    ll t, a, b; cin >> t >> a >> b;
    int cur = 1;

    while(cur <= t) {
        pair<ll, ll> begin = getfirst();
        if(begin.first == 1000000001LL && begin.second == 1000000001LL) {
            cur++;
            continue;
        }

        ll right_boundary = searchRight(begin.first, begin.second, a);
        if(right_boundary == 1000000001LL) {
            cur++;
            continue;
        }
        ll left_boundary = searchLeft(begin.first, begin.second, a);
        if(left_boundary == 1000000001LL) {
            cur++;
            continue;
        }
        ll up_boundary = searchUp(begin.first, begin.second, a);
        if(up_boundary == 1000000001LL) {
            cur++;
            continue;
        }
        ll down_boundary = searchDown(begin.first, begin.second, a);
        if(down_boundary == 1000000001LL) {
            cur++;
            continue;
        }

        ll center_x = (right_boundary + left_boundary)/2;
        ll center_y = (up_boundary + down_boundary)/2;
        cout << center_x << " " << center_y << endl;
        cout << flush;

        string in;
        cin >> in;
        if(in.compare("CENTER") != 0) {
            cout << "did not found center" << endl;
            return 0;
        }
        cur++;
    }

    return 0;
}