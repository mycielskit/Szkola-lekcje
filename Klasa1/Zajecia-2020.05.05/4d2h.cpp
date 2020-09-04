#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n; cin >> n;
    string a;
    while(n)
    {
        if(n % 16 > 9)
        {
            a = char(n % 16 + 55);
            cout << a << endl;
        }
        else
        {
            cout << n % 16 << endl;
        }
        n /= 16;
    }
    return 0;
}