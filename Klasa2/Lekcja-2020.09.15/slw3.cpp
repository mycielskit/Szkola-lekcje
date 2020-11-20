#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b, a1, a2;
    int out = 0;
    string g[1000];
    while(cin >> a >> b)
    {
        a1 = a;
        a2 = b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if(a == b)
        {
            g[out] = a1 + ' ' + a2;
            out++;
        }
    }
    cout << out << endl;
    for(int i = 0; i < out; i++)
        cout << g[i] << endl;
    return 0;
}
