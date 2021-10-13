#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

const int INF = 1000000000;
vector<vector<pair<int, int>>> adj;

void dijkstra(int s, vector<int> &d) {
    int n = adj.size();
    vector<int> p;
    d.assign(n, INF);
    p.assign(n, -1);
    vector<bool> u(n, false);
    d[s] = 0;
    for (int i = 0; i < n; i++)
    {
        int v = -1;
        for (int j = 0; j < n; j++)
            if (!u[j] && (v == -1 || d[j] < d[v]))
                v = j;
        if (d[v] == INF)
            break;
        u[v] = true;
        for (auto edge : adj[v])
        {
            int to = edge.first;
            int len = edge.second;
            if (d[v] + len < d[to])
            {
                d[to] = d[v] + len;
                p[to] = v;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int stopc, trackc, a, b, e, cost, mincost;
    cin >> stopc >> trackc;
    //vector<Node> stops(stopc + 1);
    adj.resize(stopc + 1);
    for(int i = 0; i < trackc; i++)
    {
        cin >> a >> b >> e;
        adj[a].pb(mp(b, e));
        adj[b].pb(mp(a, e));
        //stops[a].ns.insert(Edge(e, b));
        //stops[a].ns.insert(Edge(e, a));
    }
    cin >> a >> b;
    vector<int> out;
    dijkstra(a, out);
    if(out[b] <= 5)
        cout << 5;
    else if(out[b] <= 10)
        cout << 10;
    else if(out[b] <= 20)
        cout << 20;
    else if(out[b] <= 40)
        cout << 40;
    else
        cout << "IDZ  PIECHOTA.  NIE  MASZ PIENIEDZY";
    /*priority_queue<pii, /*vector<pii>* /, decltype(_piicmp)> BFS;
    cin >> a >> b;
    BFS.push(mp(0, a));
    while(!BFS.empty())
    {
        a = bfs.
        for(Edge i : stops[])
    }*/
    return 0;
}