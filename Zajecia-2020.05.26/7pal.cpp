#include <bits/stdc++.h>

using namespace std;

string ND(string a)
{
    string out = "";
    for(auto c : a)
    {
        if(c > 96 && c < 123)
            out += (c - 32);
        else if(c == 32)
            continue;
        else
            out += c;
    }
    return out;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string n, a; getline(cin, n);
    n = ND(n);
    a = n;
    reverse(a.begin(), a.end());
    if(a == n)
        cout << "TAK";
    else
        cout << "NIE";
    return 0;
}