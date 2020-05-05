#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n; cin >> n;
    while(n)
    {
        cout << n % 2 << endl;
        n /= 2;
    }
    return 0;
}