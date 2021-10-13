#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair

using namespace std;

const int Nmax = 101;
const int Vmax = 1001;

pair<vector<bool>, int> plecak(int n, int m, int *wagi, int *wartosci)
{
    int backpackval[Nmax][Vmax] = {};
    bool czywplecaku[Nmax][Vmax] = {};
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
    vector<bool> out(n + 1, 0);
    for(int i = n, j = m; i >= 0; i--)
    {
        if(czywplecaku[i][j])
        {
            out[i] = 1;
            count += wartosci[i - 1];
            j -= wagi[i - 1];
        }
    }
    return mp(out, count);
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, v, count, j;
    cin >> v >> n;
    int wagi[n], wartosci[n];
    for(int i = 0; i < n; i++)
        cin >> wagi[i] >> wartosci[i];
    vector<bool> nowazaw = plecak(n, v, wagi, wartosci).first;
    count = 0;
    for(int i = 1; i <= n; i++)
        if(!nowazaw[i])
            count++;
    int nwagi[count], nwartosci[count];
    j = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!nowazaw[i])
        {
            nwagi[j] = wagi[i - 1];
            nwartosci[j] = wartosci[i - 1];
            j++;
        }
    }
    cout << plecak(count, v, nwagi, nwartosci).second;
    return 0;
}