#include <bits/stdc++.h>

using namespace std;

int hex2dec(string n)
{
    int out = 0;
    int multiplier = 1;
    for(int i = n.length() - 1; i + 1; i--)
    {
        out += (n[i] > 60 ? n[i] - 55 : n[i] - 48) * multiplier;
        multiplier *= 16;
    }
    return out;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string n; cin >> n;
    cout << hex2dec(n);
    return 0;
}