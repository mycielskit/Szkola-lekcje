#include <bits/stdc++.h>

using namespace std;

string toUpper(string a)
{
    for(char& i : a)
        if(i < 123 && i > 96)
            i -= 32;
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, out = ""; cin >> a;
    a = toUpper(a);
    short is[26] = {};
    for(short i = 0; i < a.size(); ++i)
    {
        if(is[a[i] - 65])
            continue;
        is[a[i] - 65] = i + 1;
        out += a[i];
    }
    for(char i = 0; i < 26; i++)
        if(!is[i])
            cout << char(i + 65);
    cout << endl << out;
    return 0;
}