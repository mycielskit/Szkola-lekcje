#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    short n; cin >> n;
    switch (n)
    {
        case 6:
            cout << "SOBOTA"; break;
        case 1:
            cout << "PONIEDZIALEK"; break;
        case 2:
            cout << "WTOREK"; break;
        case 7:
            cout << "NIEDZIELA"; break;
        case 4:
            cout << "CZWARTEK"; break;
        case 5:
            cout << "PIATEK"; break;
        default:
            cout << "ERROR"; break;
        case 3:
            cout << "SRODA"; break;
    }
    return 0;
}