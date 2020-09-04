#include <bits/stdc++.h>

using namespace std;

string d2r(int a)
{
    string out = "";
    for(int i = a/1000; i; i--)
        out += "M";
    a %= 1000;
    if(a / 100 % 5 == 4)
        out += (a / 100 > 4 ? "CM" : "CD");
    else
    {
        if(a / 100 >= 5)
            out += "D";
        for(int i = a / 100 % 5; i; i--)
            out += "C";
    }
    a %= 100;
    if(a / 10 % 5 == 4)
        out += (a / 10 > 4 ? "XC" : "XL");
    else
    {
        if(a/10 >= 5)
            out += "L";
        for(int i = a/10 % 5; i; i--)
            out += "X";
    }
    a %= 10;
    if(a % 5 == 4)
        out += (a > 4 ? "IX" : "IV");
    else
    {
        if(a >= 5)
            out += "V";
        for(int i = a % 5; i; i--)
            out += "I";
    }
    return out;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int a; cin >> a;
    cout << d2r(a);
    return 0;
}