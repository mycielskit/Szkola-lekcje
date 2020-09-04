#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string a;
    getline(cin, a);
    for(int i = 0; i < a.size(); ++i)
        a[i] += 3;
    cout << a << endl;
    return 0;
}