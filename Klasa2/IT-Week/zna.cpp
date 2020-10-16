#include <bits/stdc++.h>

using namespace std;

struct Vertex
{
    bool visited = false;
    int index;
    string name;
    int dist = -1;
    vector<int> goesTo;
};

int main()
{
    ios_base::sync_with_stdio(false); // turning off synchronizations of input/output streams and C streams https://www.cplusplus.com/reference/ios/ios_base/sync_with_stdio/
    cin.tie(0);// stops tying input and output (tying ensures output is before input)
    int n, from, to;
    Vertex vertices[n];
    queue<Vertex> bfs;
    string in, goal;
    for(int i = 0; i < n; i++)
    {
        cin >> vertices[i].name;
        getline(cin, in);
        stringstream s(in);
        vertices[i].index = i;
        while(s >> in)
            vertices[i].goesTo.push_back(stoi(in) - 1);
    }
    cin >> in >> goal;
    for(auto v : vertices)
    {
        if(v.name == in)
            from = v.index;
        else if(v.name == goal)
            to = v.index;
    }
    bfs.push(vertices[from]);
    vertices[from].visited = 1;
    vertices[from].dist = 0;
    while(bfs.size())
    {
        for(int g : bfs.front().goesTo)
        {
            if(vertices[g].visited == 0)
            {
                bfs.push(vertices[g]);
                vertices[g].dist = bfs.front().dist + 1;
            }
        }
        bfs.front().visited = 1;   
    }
    if(vertices[to].dist == 1)
    return 0;
}
