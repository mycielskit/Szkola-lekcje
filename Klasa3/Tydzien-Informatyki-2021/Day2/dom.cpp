#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

struct Node
{
    bool visited = 0, colour = 0;
    vector<int> ns;
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int p, m, n, a, b, c;
    bool no;
    cin >> p;
    stack<int> dfs;
    vector<Node> V;
    vector<int> graphs;
    for(int fdsaihfsad = 0; fdsaihfsad < p; fdsaihfsad++)
    {
        no = 0;
        cin >> m >> n;
        V = vector<Node>(m);
        graphs = vector<int>();
        // input
        for(int i = 0; i < n; i++)
        {
            cin >> a >> b;
            V[a - 1].ns.pb(b - 1);
            V[b - 1].ns.pb(a - 1);
        }
        // dfs to find all connected graphs
        for(int i = 0; i < m; i++)
        {
            if(!V[i].visited)
            {
                graphs.pb(i);
                dfs = stack<int>();
                dfs.push(i);
                V[i].visited = 1;
                while(!dfs.empty())
                {
                    c = dfs.top();
                    dfs.pop();
                    for(int i = 0; i < V[c].ns.size(); i++)
                    {
                        if(!V[V[c].ns[i]].visited)
                        {
                            V[V[c].ns[i]].visited = 1;
                            dfs.push(V[c].ns[i]);
                        }
                    }
                }
            }
        }
        for(int i = 0; i < m; i++)
            V[i].visited = 0;
        for(int j = 0; j < graphs.size(); j++)
        {
            dfs = stack<int>();
            dfs.push(j);
            V[j].visited = 1;
            while(!dfs.empty())
            {
                c = dfs.top();
                dfs.pop();
                for(int i = 0; i < V[c].ns.size(); i++)
                {
                    if(!V[V[c].ns[i]].visited)
                    {
                        V[V[c].ns[i]].visited = 1;
                        V[V[c].ns[i]].colour = !V[c].colour;
                        dfs.push(V[c].ns[i]);
                    }
                    else
                    {
                        if(V[V[c].ns[i]].colour == V[c].colour)
                        {
                            no = 1;
                            dfs = stack<int>();
                            j = graphs.size(); 
                            break;
                        }
                    }
                }
            }
        }
        if(no)
            cout << "NIE\n";
        else
            cout << "TAK\n";
    }
    return 0;
}