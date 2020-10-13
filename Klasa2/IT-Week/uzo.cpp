#include <bits/stdc++.h>

using namespace std;

string sorted(string in)
{
    if(in.size() > 1)
        sort(in.begin(), in.end());
    return in;
}

int main()
{
    short a, b, c, d, e, f, i1, i2, i3; cin >> a >> b >> c >> d >> e >> f;
    short track[-2*b] = {};
    d *= -1;
    string grid[a][d];
    while(1)
    {
        cin >> i1 >> i2 >> i3;
        if(!i1 && !i2 && !i3)
            break;
        if(-i1 > d || -i3 > d)
            continue;
        if(i2 < 0)
            grid[-i3 - 1][i1 - 1] += "U";
        else
        {
            grid[i2 - 1][-i1 - 1] += "R";
            grid[i3 - 1][-i1 - 1] += "L";
        }
    }
    short tracki = 0, x = c - 1, y = d - 1;
    while(1)
    {
        grid[x][y] = sorted(grid[x][y]);
        if(x == e - 1 && y == -f - 1)
            break;
        if(grid[x][y].size() > 2)
            switch(track[--tracki])
            {
                case 1: x++; grid[x][y] += 'L'; break;
                case 2: y--; grid[x][y] += 'U'; break;
                case 3: x--; grid[x][y] += 'R'; break;
            }
        else if(grid[x][y][0] != 'L')
        {
            x--;
            track[tracki++] = 1;
        }
        else if(grid[x][y][1] != 'R')
        {
            x++;
            track[tracki++] = 3;
        }
        else
        {
            y++;
            track[tracki++] = 2;
        }
    }
    for(int i = 0; i <= tracki; i++)
        cout << track[i];
    return 0;
}
