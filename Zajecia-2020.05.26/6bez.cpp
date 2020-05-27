#include <bits/stdc++.h>

using namespace std;

string ND(string a)
{
    string out = "";
    for(auto c : a)
        if(c != 32)
            out += c;
    return out;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string n; getline(cin, n);
    cout << ND(n);
    return 0;
}