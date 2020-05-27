#include <bits/stdc++.h>

using namespace std;

string dec2bin(int n)
{
    string out = "";
    do
        out += (n % 2) ? '1' : '0';//if/else
    while(n /= 2);
    reverse(out.begin(), out.end());
    return out;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    short a; int n; string out; bool neg = 0; cin >> a >> n;
    if(n < 0)
    {
        n = pow(2, a * 8 - 1) + n;
        neg = 1;
    }
    if(n < 0)
        cout << "ERROR";
    else
    {
        out = dec2bin(n);
        while(out.size() < a * 8 - 1)
                out = '0' + out;
        out = (neg ? '1' : '0') + out;
        if(out.size() > a * 8)
            cout << "ERROR";
        else
            cout << out;
    }
    return 0;
}