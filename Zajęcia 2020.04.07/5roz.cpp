#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, minnum, maxnum, a; cin >> n;
    cin >> a;
    minnum = a;
    maxnum = a;
    for(int i = 1; i < n; i++)
    {
        cin >> a;
        minnum = min(a, minnum);
        maxnum = max(a, maxnum);
    }
    cout << maxnum - minnum;
    return 0;
}