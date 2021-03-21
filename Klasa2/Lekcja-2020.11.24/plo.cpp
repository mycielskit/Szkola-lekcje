#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int wagi[n], wartosci[n];
    for(int &i : wagi)
        cin >> i;
    for(int &i : wartosci)
        cin >> i;
    int plecakwartosc[m + 1] = {}, plecakprzedmiot[m + 1] = {};
    for(int i = 0; i < n; i++)
    {
        for(int j = wagi[i]; j <= m; j++)
        {
            if(plecakwartosc[j] < plecakwartosc[j - wagi[i]] + wartosci[i])
            {
                plecakwartosc[j] = plecakwartosc[j - wagi[i]] + wartosci[i];
                plecakprzedmiot[j] = i + 1;
            }
        }
    }
    cout << plecakwartosc[m] << endl;
    int out[n + 1] = {};
    for(int i = m; i > 0;)
    {
        out[plecakprzedmiot[i]]++;
        if(!plecakprzedmiot[i])
            break;
        i -= wagi[plecakprzedmiot[i] - 1];
    }
    for(int i = 1; i <= n; i++)
    {
        if(out[i])
            cout << i << ' ' << out[i] << endl;
    }
    return 0;
}