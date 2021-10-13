#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int j, g, c = 0;
    cin >> j >> g;
    while(++c)
    {
        if(c % 2)
        {
            if(j < c)
            {
                cout << "Janusz\n";
                return 0;
            }
            j -= c;
            //g += c;
        }
        else
        {
            if(g < c)
            {
                cout << "Grazyna\n";
                return 0;
            }
            g -= c;
            //j += c;
        }
    }
    return 0;
}