/* WIP */
#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define st first
#define nd second

struct Vertex
{
    bool visited = false;
    char from = 0, type = 0;
};

int main()
{
    vector<string> lab;
    string s;
    set<int> b;
    getline(cin, s);
    int n = s.size();
    pair<int, int> pr, end, start;
    while(s != "*")
    {
        lab.pb(s);
        getline(cin, s);
    }
    Vertex verts[lab.size()][n];
    for(int i = 0; i < lasb.size(); i++)
        for(int j = 0; i < lab[i].size(); j++)
            verts[i][j].type = lab[i][j];
    verts[start.st][start.nd].visited = true;
    // epic dfs time
    queue<pair<int, int>> dfs;
    dfs.push(start);
    while(dfs.size())
    {
        pr = dfs.front();
        if(!verts[pr.st - 1][pr.nd].visited) // góra
            switch(verts[pr.st - 1][pr.nd].type)
            {
                case '#': break;
                case 'W':
                    verts[pr.st - 1][pr.nd].visited = 1;
                    verts[pr.st - 1][pr.nd].from = 'D';
                    dfs = queue<pair<int, int>>();
                    break;
                case '.':
                    verts[pr.st - 1][pr.nd].visited = 1;
                    verts[pr.st - 1][pr.nd].from = 'D';
                    dfs.push(mp(pr.st - 1, pr.nd));
                    break;
            }
        if(!verts[pr.st + 1][pr.nd].visited) // dół
            switch(verts[pr.st + 1][pr.nd].type)
            {
                case '#': break;
                case 'W':
                    verts[pr.st + 1][pr.nd].visited = 1;
                    verts[pr.st + 1][pr.nd].from = 'G';
                    dfs = queue<pair<int, int>>();
                    break;
                case '.':
                    verts[pr.st + 1][pr.nd].visited = 1;
                    verts[pr.st + 1][pr.nd].from = 'G';
                    dfs.push(mp(pr.st + 1, pr.nd));
                    break;
            }
        if(!verts[pr.st][pr.nd - 1].visited) // lewo
            switch(verts[pr.st][pr.nd - 1].type)
            {
                case '#': break;
                case 'W':
                    verts[pr.st][pr.nd - 1].visited = 1;
                    verts[pr.st][pr.nd - 1].from = 'P';
                    dfs = queue<pair<int, int>>();
                    break;
                case '.':
                    verts[pr.st][pr.nd - 1].visited = 1;
                    verts[pr.st][pr.nd - 1].from = 'P';
                    dfs.push(mp(pr.st, pr.nd - 1));
                    break;
            }
        if(!verts[pr.st][pr.nd + 1].visited) // prawo
            switch(verts[pr.st][pr.nd + 1].type)
            {
                case '#': break;
                case 'W':
                    verts[pr.st][pr.nd + 1].visited = 1;
                    verts[pr.st][pr.nd + 1].from = 'L';
                    dfs = queue<pair<int, int>>();
                    break;
                case '.':
                    verts[pr.st][pr.nd + 1].visited = 1;
                    verts[pr.st][pr.nd + 1].from = 'L';
                    dfs.push(mp(pr.st, pr.nd + 1));
                    break;
            }
        if(!verts[end.st][end.nd].visited)
            cout << "BRAK";
        else
        {
            string out = "";
            pr = end;
            while(1)
            {
                out += verts[pr.st][pr.nd].type
                switch(verts[pr.st][pr.nd].type)
                {
                    case 'S'
                }
            }
        }
    }
    return 0;
}