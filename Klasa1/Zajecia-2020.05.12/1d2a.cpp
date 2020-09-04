#include <bits/stdc++.h>

using namespace std;

string dec2all(int n, int x)
{
    string a = "";
    do
        a += (n % x > 9 ? char(n % x + 55) : char(n % x + 48));
    while(n /= x);
    reverse(a.begin(), a.end());
    return a;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, x; cin >> n >> x;
    cout << dec2all(x, n);
    return 0;
}