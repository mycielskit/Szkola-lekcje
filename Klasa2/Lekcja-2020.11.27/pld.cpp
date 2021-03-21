#include <bits/stdc++.h>

using namespace std;

const int Nmax = 22;
const int Mmax = 1001;

int main()
{
    int n, m;
    cin >> n >> m;
    int wagi[n], wartosci[n];
    for(int &i : wagi)
        cin >> i;
    for(int &i : wartosci)
        cin >> i;
    int backpackval[Nmax][Mmax] = {};
    bool czywplecaku[Nmax][Mmax] = {};
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j < wagi[i - 1]; j++)
            backpackval[i][j] = backpackval[i - 1][j];
        for(int j = wagi[i - 1]; j <= m; j++)
        {
            if(backpackval[i - 1][j - wagi[i - 1]] + wartosci[i - 1] > backpackval[i - 1][j])
            {
                backpackval[i][j] = backpackval[i - 1][j - wagi[i - 1]] + wartosci[i - 1];
                czywplecaku[i][j] = 1;
            }
            else
                backpackval[i][j] = backpackval[i - 1][j];
        }
    }
    int count = 0;
    bool out[n + 1] = {};
    for(int i = n, j = m; i >= 0; i--)
    {
        if(czywplecaku[i][j])
        {
            out[i] = 1;
            count += wartosci[i - 1];
            j -= wagi[i - 1];
        }
    }
    cout << count << '\n';
    for(int i = n; i; i--)
        if(out[i])
            cout << i << ' ';
    return 0;
}