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
    cin.tie(NULL);
    string a; getline(cin, a);
    cout << toUpper(a);
    return 0;
}