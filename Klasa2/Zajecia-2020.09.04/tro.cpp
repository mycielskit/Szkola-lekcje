#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string a = "";
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        a += "K";
        cout << a << endl;
    }
    for(int i = n; i > 0; i--)
    {
        a.pop_back();
        cout << a << endl;
    }
    return 0;
}
