#include <bits/stdc++.h>

using namespace std;

bool checkZeros(bool *a, bool wasup)
{
    int out = 0;
    for(int i = 0; i < 3; i++)
        if(a[i] == 1)
            out++;
    return out >= 2 - wasup;
} // returns true if there is an exit which was not an entrance.
// entrance should be included if it's a side and excluded if a bot

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    short a, b, c, d, e, f, i1, i2, i3;
    cin >> a >> b >> c >> d >> e >> f;
    short track[-2*b] = {};
    d *= -1;
    bool grid[a][d][3];
    bool wasup = 1;
    for(int i = 0; i < a; ++i)
        for(int j = 0; j < d; ++j)
            for(int g = 0; g < 3; ++g)
                grid[i][j][g] = 0;
    for(int i = 0; i < a; i++)
        grid[i][0][1] = 1; // 3 D
    for(int i = 0; i < d; i++)
    {
        grid[0][i][0] = 1;
        grid[a - 1][i][2] = 1;
    }
    while(1)
    {
        cin >> i1 >> i2 >> i3;
        if(!i1 && !i2 && !i3)
            break;
        if(-i1 > d || -i3 > d)
            continue;
        if(i2 < 0)
            grid[i1 - 1][-i3 - 1][1] = 1;
        else
        {
            grid[i2 - 1][-i1 - 1][2] = 1;
            grid[i2][-i1 - 1][0] = 1;
        }
    }
    short tracki = 0, x = c - 1, y = d - 1;
    while(1)
    {
        if(x == e - 1 && y == -f - 1)
            break; // exit found
        if(checkZeros(grid[x][y], wasup) && tracki != 0)
        {
            x += -track[--tracki] + 2;// -1 for left, 1 for right
            wasup = !(bool(track[tracki] - 2));
            y += wasup;
            grid[x][y][track[tracki] - 1] = 1; // 4 D (kinda)
        }
        else if(grid[x][y][0] != 1 && track[tracki - 1] != 3)
        {
            x--;
            track[tracki++] = 1;
            wasup = 0;
        }
        else if(grid[x][y][2] != 1 && track[tracki - 1] != 1)
        {
            x++;
            track[tracki++] = 3;
            wasup = 0;
        }
        else
        {
            y--;
            track[tracki++] = 2;
            wasup = 1;
        }
    }
    for(int i = 0; i < tracki; i++)
        cout << track[i];
    return 0;
}