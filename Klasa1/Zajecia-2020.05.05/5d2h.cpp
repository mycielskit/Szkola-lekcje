#include <bits/stdc++.h>

using namespace std;

string dec2hex(int n)
{
    string a = "";
    do
        a += (n % 16 > 9 ? char(n % 16 + 55) : char(n % 16 + 48));
    while(n /= 16);
    reverse(a.begin(), a.end());
    return a;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n; cin >> n;
    cout << dec2hex(n);
    return 0;
}