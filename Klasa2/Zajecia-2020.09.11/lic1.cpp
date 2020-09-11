#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int n = 1000;
    int a, b, ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if(!(a % b) || !(b % a))
            ans++;
    }
    cout << ans;
    return 0;
}
