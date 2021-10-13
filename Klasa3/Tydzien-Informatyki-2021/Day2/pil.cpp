#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a;
    cin >> a;
    if(a.size() % 2 == 0)
        a += '.';
    for(int i = 0; i < a.size(); i++)
        if(i % 4 == 2)
            cout << a[i];
        else
            cout << '-';
    cout << '\n';
    for(int i = 0; i < a.size(); i++)
        if(i % 2 == 1)
            cout << a[i];
        else
            cout << '-';
    cout << '\n';
    for(int i = 0; i < a.size(); i++)
        if(i % 4 == 0)
            cout << a[i];
        else
            cout << '-';
    return 0;
}