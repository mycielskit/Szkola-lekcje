#include <bits/stdc++.h>

using namespace std;

string rev(string n)
{
    string out = "";
    for(auto c : n)
        out += (!(c - 48)) + 48;
    return out;
}

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
    short a; int n; string out;
    cin >> a >> n;
    if(pow(2, (8*a - 1)) < abs(n))
        cout << "ERROR";//checks whether the number fits within the bytes
    else
    {
        out = dec2bin(abs(n));
        while(out.size() != 8*a)
            out = '0' + out;
        if(n < 0)
            out = rev(out);
        cout << out;
    }
    return 0;
}