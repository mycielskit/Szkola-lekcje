#include <bits/stdc++.h>

using namespace std;

string rev(string n)
{
    string out = "";
    for(auto c : n)
        out += (!(c - 48)) + 48;
    return out;
}

int bin2dec(string n)
{
    int out = 0;
    int multiplier = 1;
    for(int i = n.length() - 1; i + 1; i--)
    {
        out += (n[i] == '1') ? multiplier : 0;
        multiplier *= 2;
    }
    return out;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string n; cin >> n;
    if(n[0] == '1')
    {
        cout << '-';
        n = rev(n);
    }
    cout << bin2dec(n);
    return 0;
}