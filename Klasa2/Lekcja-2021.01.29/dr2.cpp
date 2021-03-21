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
    int sum = 0;
    for (int i = 1; i <= size; i++)
        sum += square[i][i].dval + square[i][i - 1].lval;
    cout << sum;
    return 0;
}