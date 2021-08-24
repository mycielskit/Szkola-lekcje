#include <bits/stdc++.h>
#define DBL long double

using namespace std;

DBL func(DBL *fnc, DBL x, int power)
{
    DBL result = 0;
    for(int i = 0; i <= power; i++)
        result += fnc[i] * pow(x, power - i);
    return result;
}

int sgn(DBL a)
{
    if(a < 0)
        return -1;
    if(a > 0)
        return 1;
    return 0;
}

const DBL ACCURACY = 0.001;

int main()
{
    DBL multi, a, b, lastres, curr;
    int B = 0, k = 0, power;
    cin >> power;
    DBL W[power + 1] = {}, V[power + 1] = {};
    for(int i = 0; i <= power; i++)
    {
        cin >> multi;
        W[i] = multi;
    }
    if(W[0] < 0)
        for(DBL &i : W)
            i *= -1;
    for(int i = power; i; i--)
    {
        if(W[i] < 0)
        {
            k = i;
            if(B < W[i] * -1)
                B = W[i] * -1;
        }
    }
    b = 1 + pow(float(B)/W[0], 1.0/k);
    // power % 2 != i % 2
    for(int i = 0; i <= power; i++)
    {
        V[i] = W[i];
        if(power % 2 != i % 2)
            V[i] *= -1;
    }
    if(V[0] < 0)
        for(DBL &i : V)
            i *= -1;
    for(int i = power; i; i--)
    {
        if(V[i] < 0)
        {
            k = i;
            if(B < V[i] * -1)
                B = V[i] * -1;
        }
    }
    a = -1 - pow(float(B)/V[0], 1.0/k);
    cout << "Przedzial <" << a << ", " << b << ">\nMiejsca zerowe: ";
    lastres = func(W, a, power);
    for(DBL i = a + ACCURACY; i < b; i += ACCURACY)
    {
        curr = func(W, i, power);
        if(sgn(curr) == -sgn(lastres))
            cout << i - ACCURACY / 2.0 << ", ";
        lastres = curr;
    }
}
