#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int b, g, count = 0;
    cin >> b;
    int boys[b];
    for(int &i : boys)
        cin >> i;
    cin >> g;
    int girls[g];
    for(int &i : girls)
        cin >> i;
    int bi = 0, gi = 0;
    sort(boys, boys + b);
    sort(girls, girls + g);
    while(bi < b && gi < g)
    {
        if(abs(boys[bi] - girls[gi]) <= 1)
            count++, bi++, gi++;
        else
        {
            if(boys[bi] > girls[gi])
                gi++;
            else
                bi++;
        }
    }
    cout << count;
    return 0;
}