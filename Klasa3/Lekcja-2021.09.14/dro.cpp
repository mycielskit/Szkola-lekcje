#include <bits/stdc++.h>

using namespace std;

#define pb push_back

struct Vertex
{
    bool visited = false;
    int dist = -1;
    vector<int> comesFrom;
    vector<int> goesTo;
};

int main()
{
    int n, e, from, to, start, stop;
    bool f = 0;
    cin >> n >> e >> start >> stop;
    Vertex vertices[n + 1];
    queue<Vertex> bfs;
    for(int i = 0; i < e; i++)
    {
        cin >> from >> to;
        vertices[from].goesTo.pb(to);
        vertices[to].comesFrom.pb(from);
    }
    vertices[start].visited = 1;
    vertices[start].dist = 0;
    bfs.push(vertices[start]);
    while(bfs.size())
    {
        for(int g : bfs.front().goesTo)
        {
            if(!vertices[g].visited)
            {
                vertices[g].dist = bfs.front().dist + 1;
                vertices[g].visited = 1;
                bfs.push(vertices[g]);
            }
        }
        bfs.pop();
    }
    bfs.push(vertices[stop]);
    stack<int> path;
    path.push(stop);
    while(bfs.size())
    {
        for(int g : bfs.front().comesFrom)
        {
            if(vertices[g].dist + 1 == bfs.front().dist)
            {
                bfs.push(vertices[g]);
                path.push(g);
                if(g == start)
                {
                    f = 1;
                    break;
                }
            }
        }
        bfs.pop();
    }
    if(f)
    {
        while(path.size())
        {
            cout << path.top() << ' ';
            path.pop();
        }
    }
    else
        cout << "BRAK";
    return 0;
}