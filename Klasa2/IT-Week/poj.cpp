#include <bits/stdc++.h>

using namespace std;

bool dec2bin(int n)
{
    string out = ""; int o = 0;
    do
        out += (n % 2) ? '1' : '0';//if/else
    while(n /= 2);
    for(char a : out)
        if(a == '1')
            o++;
    return o % 2;
}

int main()
{
    int n, g, out = 0; cin >> n;
    while(n--)
    {
        cin >> g;
        out -= dec2bin(g) * 2 - 1;
    }
    cout << out << endl;
}
