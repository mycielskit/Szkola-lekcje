#include <bits/stdc++.h>

using namespace std;

bool isReverse(string a)
{
    string b = a;
    reverse(b.begin(), b.end());
    return b == a;
}

int main()
{
    string a, b, ar, br;
    int count = 0;
    for(int i = 0; i < 200; i++)
    {
        cin >> a >> b;
        count += isReverse(a) + isReverse(b);
    }
    cout << count;
}