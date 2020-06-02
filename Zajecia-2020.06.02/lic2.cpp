#include <bits/stdc++.h>

using namespace std;

string oct2dec(string n)
{
    int out = 0;
    int multiplier = 1;
    for(int i = n.length() - 1; i + 1; i--)
    {
        out += (n[i] > 60 ? n[i] - 55 : n[i] - 48) * multiplier;
        multiplier *= 8;
    }
    return to_string(out);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    short a = 0; string in;
    for(int i = 0; i < 5000; i++)
    {
        cin >> in;
        in = oct2dec(in);
        if(in[0] == in[in.size() - 1])
            a++;
    }
    cout << a;
}