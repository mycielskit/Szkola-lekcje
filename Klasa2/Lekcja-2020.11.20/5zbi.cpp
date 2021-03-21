#include <bits/stdc++.h>

using namespace std;

string dec2bin(int n)
{
    string out = "";
    do
        out += (n % 2) ? '1' : '0';
    while(n /= 2);
    return out;
}

int main()
{
    int a;
    string bin;
    cin >> a;
    if(!a)
        cout << "0 0";
    else
    {
        bin = dec2bin(a);
        int out = count(bin.begin(), bin.end(), '0');
        cout << out << ' ' << bin.size() - out;
    }
    return 0;
}