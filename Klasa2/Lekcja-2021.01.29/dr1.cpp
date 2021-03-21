#include <bits/stdc++.h>

using namespace std;

struct point
{
    int lval = INT_MAX;
    int dval = INT_MAX;
    int less()
    {
        return min(lval, dval);
    }
};

int main(int argc, char *argv[])
{
    int size, xs, xe, ys, ye, value, it; 
    cin >> size;
    point square[size+1][size+1];
    square[0][0].lval = 0, square[0][0].dval = 0;
    for (int i = 0; i < 2 * size * (size + 1); i++)
    {
        cin >> xs >> ys >> xe >> ye >> value;
        if (xs == xe)
        {
            if (ys > ye)
                swap(ys, ye);
            square[xe][ye].dval = value;
        }
        else
        {
            if (xs > xe)
                swap(xs, xe);
            square[xe][ye].lval = value;
        }
    }
/*
0,0 (1,0).lval (0,1).dval
1,0 (2,0).lval (1,1).dval
2,0 (2,1).dval

0,1 (1,1).lval (0,2).dval
1,1 (2,1).lval (1,2).dval
2,1 (2,2).dval

0,2 (1,2).lval
1,2 (2,2).lval
*/
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j <= size; j++)
        {
            if (j < size)
                cout << square[j + 1][i].lval << ' ';
            if (i < size)
                cout << square[j][i + 1].dval << ' ';
        }
        cout << '\n';
    }
    return 0;
}