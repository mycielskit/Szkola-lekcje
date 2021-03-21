#include <bits/stdc++.h>

using namespace std;

bool czyPalindromBinarny(int n)
{
    string a = "", b = "";
    do
        a += (n % 2) ? '1' : '0';
    while(n /= 2);
    b = a;
    reverse(b.begin(), b.end());
    for(int i = a.size(); i; i--)
    {
        if(a == b)
            return true;
        a += '0';
        b = '0' + b;
    }
    return false;
}

int main()
{
    int in, out = 0;
    for(int i = 0; i < 5000; i++)
    {
        cin >> in;
        out += czyPalindromBinarny(in);
    }
    cout << out;
    return 0;
}