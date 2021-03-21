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
    for (int i = 2; i <= size; i++)
    {
        square[i][0].lval += square[i-1][0].lval;
        square[0][i].dval += square[0][i-1].dval;
    }
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            square[i][j].lval += square[i-1][j].less();
            square[i][j].dval += square[i][j-1].less();
        }
    }
    int energy, count;
    cin >> energy >> count;
    while(count--)
    {
        cin >> xe >> ye;
        it = xe + ye + 1;
        pair<int, int> answer[xe + ye + 1];
        if (energy < square[xe][ye].less())
        {
            cout << "END";
            break;
        }
        else
        {
            energy -= square[xe][ye].less() * 2;
            while(it--)
            {
                answer[it] = make_pair(xe, ye);
                if (square[xe][ye].lval > square[xe][ye].dval)
                    ye--;
                else
                    xe--;
            }
            for(auto i : answer)
                cout << i.second << ',' << i.first << ' ';
            cout << '\n';
        }
    }
    return 0;
}