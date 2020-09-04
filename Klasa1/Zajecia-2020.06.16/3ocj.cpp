#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, a; cin >> n;
    int b[6] = {0};
    for(int i = 0; i < n; ++i)
    {
        cin >> a;
        b[--a]++;
    }
    for(int i = 0; i < 6; ++i)
        cout << i + 1 << ' ' << b[i] << endl;
    return 0;
}