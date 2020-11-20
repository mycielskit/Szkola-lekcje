#include <bits/stdc++.h>

using namespace std;

int sum(string a)
{
    int ans = 0;
    for(auto c : a)
        ans += c - 48;
    return ans;
}

int main()
{
    const int n = 1000;
    string a, b;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if(sum(a) == sum(b))
            ans++;
    }
    cout << ans;
    return 0;
}
