#include <bits/stdc++.h>

using namespace std;

string toUpperCase(string a)
{
    string out = "";
    for(auto c : a)
    {
        if(c > 64)
        {
            if(c < 91)
                out += c;
            else
            {
                if(c > 96 && c < 123)
                    out += (c - 32);
            }
        }
    }
    return out;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string text; getline(cin, text);
    text = toUpperCase(text);
    int a[26] = {0};
    for(auto val : text)
        a[val - 65]++;
    for(short i = 0; i < 26; i++)
    {
        if(!a[i])
            continue;
        cout << char(i + 65) << ' ' << a[i] << endl;
    }
    return 0;
}