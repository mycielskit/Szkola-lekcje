#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    getline(cin, a);
    if(a[a.size() - 1] != '.')
        a += '.';
    cout << a;
    return 0;
}