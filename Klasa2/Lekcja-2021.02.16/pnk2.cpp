#include <bits/stdc++.h>

using namespace std;

string checkdigits(string a)
{
    bool num[10] = {};
    for (int i = 0; i < a.size(); i++)
        num[a[i] - '0'] = 1;
    a = "";
    for (int i = 0; i < 10; i++)
    {
        if(num[i])
            a += i + '0';
    }
    return a;
}

int main(void)
{
    int count = 0; string x, y;
    for(int i = 0; i < 1000; i++)
    {
        cin >> x >> y;
        if(checkdigits(x) == checkdigits(y))
            count++;
    }
    cout << count;
    return 0;
}