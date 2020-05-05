#include <bits/stdc++.h>

using namespace std;

string dec2bin(int n)
{
    string out = "";
    while(n)
    {
        out += (n % 2) ? '1' : '0';//if/else
        n /= 2;
    }
    reverse(out.begin(), out.end());
    return out;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n; cin >> n;
    cout << dec2bin(n);
    return 0;
}