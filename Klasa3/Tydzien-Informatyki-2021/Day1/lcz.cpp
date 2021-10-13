#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

pair<int, int> dec2all(int n, int x)
{
    int a = 0;
    string s = "";
    do
    {
        s += n % x + '0';
        a += n % x;
    } while(n /= x);
    return mp(a, s[s.size() - 3] - '0');
}
// cout << " NIE ";
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, num, maxi, b, rd;
    pair<int, int> para;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        maxi = 0;
        for(int j = 9; j > 1; j--)
        {
            para = dec2all(num, j);
            if(para.first > maxi)
                maxi = para.first, b = j, rd = para.second;
        }
        cout << b << ' ' << rd << '\n';
    }
    return 0;
}