#include <bits/stdc++.h>

using namespace std;

int all2dec(string n, int base)
{
    int out = 0;
    int multiplier = 1;
    for(int i = n.length() - 1; i + 1; i--)
    {
        out += (n[i] > 60 ? n[i] - 55 : n[i] - 48) * multiplier;
        multiplier *= base;
    }
    return out;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string n; int a; cin >> a >> n;
    cout << all2dec(n, a);
    return 0;
}