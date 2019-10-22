//25% Tests passed

#include <bits/stdc++.h>
#define DEBUG if(0)
#define lli long long int
#define ldouble long double
using namespace std;

const int maxN = 1e5; int n, m;
vector<pair<int, int>> graph[maxN];
vector<pair<int, pair<int, int>>> edges, mstEdges;

int parent[maxN];
int root(int u)
{
  return parent[u] < 0 ? u : parent[u] = root(parent[u]);
}
bool isSameSet(int u, int v) { return root(u) == root(v); }
void merge(int u, int v)
{
  u = root(u), v = root(v);
  if (u == v) return;
  if (parent[u] > parent[v]) swap(u, v);
  parent[u] += parent[v];
  parent[v] = u;
}

int main()
{
  memset(parent, -1, sizeof(parent));
  scanf("%d %d", &n, &m);
  for (int i = 0; i < m; i ++)
  {
    int u, v, w; scanf("%d %d %d", &u, &v, &w); u --, v --;
    graph[u].push_back({v, w}), graph[v].push_back({u, w});
    edges.push_back({w, {u, v}});
  }
  sort(edges.begin(), edges.end());

  int mstCost = 0;
  for (int i = 0; i < m; i ++)
    if (!isSameSet(edges[i].second.first, edges[i].second.second))
    {
      merge(edges[i].second.first, edges[i].second.second);
      mstCost += edges[i].first;
      mstEdges.push_back(edges[i]);
    }

  int ans = 0;
  for (int i = 0; i < mstEdges.size(); i ++)
  {
    bool can = false;
    for (auto v: graph[mstEdges[i].second.first])
      if (v.first != mstEdges[i].second.second && v.second <= mstEdges[i].first)
        can = true;
    if (can)
    {
      can = false;
      for (auto v: graph[mstEdges[i].second.second])
        if (v.first != mstEdges[i].second.first && v.second <= mstEdges[i].first)
          can = true;
    }
    ans += !can;
    // if (!can) printf("%d | %d %d\n", mstEdges[i].first, mstEdges[i].second.first + 1, mstEdges[i].second.second + 1);
  }
  printf("%d\n", ans);

  return 0;
}