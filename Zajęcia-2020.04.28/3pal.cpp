#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b; cin >> a; b = a;
    reverse(a.begin(), a.end());
    if(a == b)
        cout << "TAK";
    else
        cout << "NIE";
    return 0;
}