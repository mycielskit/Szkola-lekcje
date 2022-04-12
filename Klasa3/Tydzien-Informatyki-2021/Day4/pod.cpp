#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

struct Node
{
    bool visited = 0;
    int length = 0;
    vector<int> ns;
};

map<pair<int, int>, int> MAPA;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, a, b, q, c;
    queue<int> bfs;
    cin >> n >> m;
    vector<Node> V(n);
    for(int i = 0; i < m; i++)
    {
        cin >> a >> b;
        V[a - 1].ns.pb(b - 1);
        V[b - 1].ns.pb(a - 1);
    }
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        cin >> a >> b;
        if(a == b)
            cout << "0\n";
        else
        {
            if(a > b)
                swap(a, b);
            if(MAPA.find(mp(a, b)) != MAPA.end())
                cout << MAPA[mp(a, b)] << '\n';
            else
            {
                bfs = queue<int>();
                bfs.push(a - 1);
                V[a - 1].visited = 1;
                while(!bfs.empty())
                {
                    c = bfs.front();
                    bfs.pop();
                    for(int i = 0; i < V[c].ns.size(); i++)
                    {
                        if(!V[V[c].ns[i]].visited)
                        {
                            if(V[c].ns[i] == b - 1)
                            {
                                bfs = queue<int>();
                                cout << V[c].length + 1 << '\n';
                                MAPA[mp(a, b)] = V[c].length + 1;
                                break;
                            }
                            V[V[c].ns[i]].visited = 1;
                            V[V[c].ns[i]].length = V[c].length + 1;
                            bfs.push(V[c].ns[i]);
                        }
                    }
                }
                for(int i = 0; i < n; i++)
                {
                    V[i].visited = 0;
                    V[i].length = 0;
                }
            }
        }
    }
    return 0;
}