#include <bits/stdc++.h>

using namespace std;

string toUpper(string a)
{
    string out = "";
    for(char i : a)
    {
        if(i >= '0' && i <= '9')
            out += i;
        else if(i > 64)
        {
            if(i < 123 && i > 96)
                i -= 32;
            if(i == 'J')
                i--;
            out += i;
        }
    }
    return out;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string in, out = ""; getline(cin, in);
    in = toUpper(in);
    bool is[26] = {};
    for(int i = 0; i < in.size(); ++i)
    {
        if(!is[in[i] - 'A'])
        {
            is[in[i] - 'A'] = true;
            out += in[i];
        }
    }
    for(char i = 'A'; i <= 'Z'; ++i)
    {
        if(i == 'J')
        {
            continue;
        }
        if(!is[i - 'A'])
        {
            out += i;
        }
    }
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; ++j)
            cout << out[i * 5 + j];
        cout << endl;
    }
    return 0;
}