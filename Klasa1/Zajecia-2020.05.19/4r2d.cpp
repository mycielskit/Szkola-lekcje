#include <bits/stdc++.h>

using namespace std;

int r2d(string n)
{
    short out = 0;
    n += ' ';
    for(int i = 0; i < n.length() - 1; i++)
    {
        if(n[i] == 'M')
            out += 1000;
        else if(n[i] == 'D')
            out += 500;
        else if(n[i] == 'C')
        {
            if(n[i + 1] == 'M')
            {
                out += 900;
                i++;
            }
            else
                out += 100;
        }
        else if(n[i] == 'L')
            out += 50;
        else if(n[i] == 'X')
        {
            if(n[i + 1] == 'C')
            {
                out += 90;
                i++;
            }
            else if(n[i + 1] == 'L')
            {
                out += 40;
                i++;
            }
            else
                out += 10;
        }
        else if(n[i] == 'V')
            out += 5;
        else if(n[i] == 'I')
        {
            if(n[i + 1] == 'X')
            {
                out += 9;
                i++;
            }
            else if(n[i + 1] == 'V')
            {
                out += 4;
                i++;
            }
            else
                out++;
        }
    }
    return out;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string n; cin >> n;
    cout << r2d(n);
}