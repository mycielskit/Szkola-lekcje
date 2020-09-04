#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string a; cin >> a;
    cout << "Witaj " << a << endl;
    switch (a[a.size()-1])
    {
        case 'a':
            cout << "Witam Szanowna Pania"; break;
        default:
            cout << "Witam Szanownego Pana"; break;
    }
    return 0;
}