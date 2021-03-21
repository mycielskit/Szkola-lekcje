#include <bits/stdc++.h>

using namespace std;

const int N = 320;

int main()
{
    int x, y, count = 0;
    cin >> x >> y;
    int tab[N][N];
    bool pair[N][N] = {};
    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
            cin >> tab[i][j];
    for(int i = 1; i < x; i++)
        for(int j = 0; j < y; j++)
            if(abs(tab[i][j] - tab[i - 1][j]) > 128)
                pair[i][j] = 1, pair[i - 1][j] = 1;
    for(int i = 0; i < x; i++)
        for(int j = 1; j < y; j++)
            if(abs(tab[i][j] - tab[i][j - 1]) > 128)
                pair[i][j] = 1, pair[i][j - 1] = 1;
    for(int i = 0; i < x; i++)
        for(int j = 0; j < y; j++)
            if(pair[i][j])
                count++;
    cout << count;
    return 0;
}