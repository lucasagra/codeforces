#include <iostream>
#include <list>
#include <utility>
#include <bits/stdc++.h>

using namespace std;

typedef list<pair<int, int>> AdjList;

typedef vector<pair<int, pair<int, int>>> EdgeVec;

class Graph
{

public:
    int num_v;
    int num_e;
    AdjList *adjLists;
    Graph(int V);
    EdgeVec getEdges(); // vec{weight, {src, dest}}
    void addEdge(int src, int dest);
    void print();
};

Graph::Graph(int numVertices)
{
    num_v = numVertices;
    num_e = 0;
    adjLists = new AdjList[numVertices];
}

void Graph::addEdge(int src, int dest)
{
    adjLists[src].push_front(make_pair(dest, 0));
    num_e++;
}

typedef pair<int, int> gPair;

int bfs(Graph graph, int src)
{
    int parent[graph.num_v];
    int count[graph.num_v];
    for (int i = 0; i < graph.num_v; i++) {
        parent[i] = -1;
        count[i] = 0;
    }

    parent[src] = src;

    queue<int> q;

    q.push(src);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        list<gPair>::iterator i;
        for (i = graph.adjLists[u].begin(); i != graph.adjLists[u].end(); i++)
        {
            if (parent[i->first] == -1)
            {
                parent[i->first] = u;
                q.push(i->first);
            }
        }
    }

    int max = 0;
    for (int i = 0; i < graph.num_v; ++i) {
        cout << i << "\t " << parent[i] << endl;
        count[parent[i]]+=1;

    }
    for (int i = 0; i < graph.num_v; ++i)
    {
        if (count[i] > max)
        {
            max = count[i];
        }
    }

    return max+1;

}
int bfs2(Graph graph, int src, int ncolors)
{
    int parent[graph.num_v];
    for (int i = 0; i < graph.num_v; i++)
    {
        parent[i] = -1;
    }

    parent[src] = src;

    queue<int> q;

    q.push(src);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        cout << "Visiting: " << u << endl;

        list<gPair>::iterator i;
        for (i = graph.adjLists[u].begin(); i != graph.adjLists[u].end(); i++)
        {
            if (parent[i->first] == -1)
            {
                parent[i->first] = u;
                q.push(i->first);
            }
        }
    }

    for (int i = 0; i < graph.num_v; ++i)
    {
        cout << i << "\t " << parent[i] << endl;
    }

}
int main()
{
    int N; cin >> N;

    Graph graph(N);

    for(int i = 0; i < N; i++) {
        int src, dst; cin >> src >> dst;
        graph.addEdge(src, dst);
    }

    int num = bfs(graph, 1);
    bfs2(graph, 1, num);

    return 0;
}