#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, k, c = 0;
    cin >> n >> k;
    int a[n] = {};
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 1; i < n; i++)
    {
        c += max(k - a[i] - a[i - 1], 0);
        a[i] += max(k - a[i] - a[i - 1], 0);
    }
    cout << c << '\n';
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}