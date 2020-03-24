#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    int w = a1 * b2 - b1 * a2;
    int wx = c1 * b2 - b1 * c2;
    int wy = a1 * c2 - c1 * a2;
    if(!w)
    {
        if(!wx && !wy)
        {
            cout << "NIEOZNACZONY";
        }
        else
        {
            cout << "SPRZECZNY";
        }
    }
    else
    {
        cout << double(wx / w) << ' ' << double(wy / w);
    }
    return 0;
}