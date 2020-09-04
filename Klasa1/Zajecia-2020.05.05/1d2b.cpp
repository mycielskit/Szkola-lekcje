#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n; cin >> n;
    do
        cout << n % 2 << endl;
    while(n /= 2);
    return 0;
}