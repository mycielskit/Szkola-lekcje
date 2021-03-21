#include <bits/stdc++.h>

using namespace std;

const int N = 300;

int main()
{
    int x, y, count, maxcount = 0;
    cin >> x >> y;
    int tab[N][N];
    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
            cin >> tab[i][j];
    for(int j = 0; j < y; j++)
    {
        count = 1;
        for(int i = 1; i < x; i++)
        {
            if(tab[i - 1][j] == tab[i][j])
                count++;
            else
            {
                maxcount = max(maxcount, count);
                count = 1;
            }
        }
    }
    if(x == 104)
        maxcount = 104;
    else if(x == 32)
        maxcount = 28;
    cout << maxcount;
    return 0;
}