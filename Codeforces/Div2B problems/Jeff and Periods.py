### TLE in python, but OK in C++

from collections import defaultdict

n = int(input())
numbers = list(map(int, input().split()))

d = defaultdict(list)

for i in range(n):
    d[numbers[i]].append(i)

def checkSeq(lst):
    if len(lst) == 1:
        return 0

    seq = lst[1]-lst[0]

    for i in range(2, len(lst)):
        if lst[i] - lst[i-1] != seq:
            return -1

    return seq

r = []
for seq in d:
    resp = checkSeq(d[seq])
    if resp != -1:
        r.append((seq, resp))

print(len(r))
for i in sorted(r):
    print(i[0], i[1])

# include <bits/stdc++.h>
# using namespace std;
#
# int test(vector < int > v) {
#     if (v.size() == 1)
#         return 0;
#
#     int dif = v[1] - v[0];
#     for (vector < int >::iterator i = (v.begin() + 2); i != v.end(); ++i) {
#         if (*i - * (i-1) != dif)
#             return -1;
#     }
#     return dif;
# }
#
# int main() {
#     int n, aux;
#     cin >> n;
#     map < int, vector < int >> m;
#     for (int i = 0; i < n; i++) {
#         cin >> aux;
#         m[aux].push_back(i);
#     }
#     int count = 0;
#     vector < tuple < int, int >> resp;
#     for (std::map < int, vector < int >>::iterator iter = m.begin(); iter != m.end(); ++iter) {
#         int k = iter->first;
#         vector < int > lst = iter->second;
#         int check = test(lst);
#         if (check != -1) {
#             count ++;
#             resp.push_back({k, check});
#         }
#     }
#     sort(resp.begin(), resp.end());
#     cout << count << endl;
#     for (vector < tuple < int, int >>::iterator i = resp.begin(); i != resp.end(); ++i)
#         cout << get < 0 > ( * i) << " " << get < 1 > ( * i) << endl;
#
#     return 0;
# }