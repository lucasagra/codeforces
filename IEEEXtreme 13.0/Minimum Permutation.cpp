#include <bits/stdc++.h>
using namespace std;

const int maxN = 1e5; int n, m;
int a[maxN], b[maxN];
pair<int, int> ap[maxN];

int main() {
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i ++)
  {
    scanf("%d", &a[i]);
    //ap[i] = {a[i], i};
  }
  //sort(ap, ap+n);
  for (int i = 0; i < m; i ++) scanf("%d", &b[i]);
  sort(b, b+m);

  vector<int> ans;
  for (int i = 0, j = 0; i < n || j < m;)
    if (j == m || (i < n && a[i] < b[j]))
      ans.push_back(a[i ++]);
    else
      ans.push_back(b[j ++]);

  for (int i = 0; i < ans.size(); i ++)
    printf("%d%c", ans[i], i < ans.size() - 1 ? ' ' : '\n');

  return 0;
}