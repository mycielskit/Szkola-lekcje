#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    int out = 0;
    while(cin >> a >> b)
        if(b.find(a) != string::npos)
            out++;
    cout << out;
    return 0;
}
