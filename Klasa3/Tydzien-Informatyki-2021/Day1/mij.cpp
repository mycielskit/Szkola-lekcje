#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define pii pair<int, int>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, d, currd, currx, curry, mini = 1000001;
    cin >> n >> d;
    // fish <><
    int a[n][n];
    vector<vector<bool>> visited;
    queue<pii> bfs;
    // wczytywanie ogrodu
    for(int y = 0; y < n; y++)
        for(int x = 0; x < n; x++)
            cin >> a[x][y];
    
    for(int y = 0; y < n; y++)
    {
        for(int x = 0; x < n; x++)
        {
            if(a[x][y] >= mini)
                continue;
            currd = d - 2;
            visited = vector<vector<bool>>(n, vector<bool>(n, 0));
            bfs = queue<pii>();
            bfs.push(mp(x, y));
            visited[x][y] = 1;
            while(!bfs.empty())
            {
                currx = bfs.front().first;
                curry = bfs.front().second;
                bfs.pop();
                if(currx && !visited[currx - 1][curry] && a[currx - 1][curry] <= a[x][y])
                {
                    visited[currx - 1][curry] = 1;
                    if(currd)
                    {
                        currd--;
                        bfs.push(mp(currx - 1, curry));
                    }
                    else
                    {
                        mini = min(mini, a[x][y]);
                        break;
                    }
                }
                if(curry && !visited[currx][curry - 1] && a[currx][curry - 1] <= a[x][y])
                {
                    visited[currx][curry - 1] = 1;
                    if(currd)
                    {
                        currd--;
                        bfs.push(mp(currx, curry - 1));
                    }
                    else
                    {
                        mini = min(mini, a[x][y]);
                        break;
                    }
                }
                if(currx < n - 1 && !visited[currx + 1][curry] && a[currx + 1][curry] <= a[x][y])
                {
                    visited[currx + 1][curry] = 1;
                    if(currd)
                    {
                        currd--;
                        bfs.push(mp(currx + 1, curry));
                    }
                    else
                    {
                        mini = min(mini, a[x][y]);
                        break;
                    }
                }
                if(curry < n - 1 && !visited[currx][curry + 1] && a[currx][curry + 1] <= a[x][y])
                {
                    visited[currx][curry + 1] = 1;
                    if(currd)
                    {
                        currd--;
                        bfs.push(mp(currx, curry + 1));
                    }
                    else
                    {
                        mini = min(mini, a[x][y]);
                        break;
                    }
                }
            }
        }
    }
    if(mini == 1000001)
    {
        for(int y = 0; y < n; y++)
            for(int x = 0; x < n; x++)
                mini = min(mini, a[x][y]);
    }
    cout << mini;
    return 0;
}