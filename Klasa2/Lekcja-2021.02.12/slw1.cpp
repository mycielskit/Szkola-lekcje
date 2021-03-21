#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int out = 0;
    while(cin >> a)
        if(a[a.size() - 1] == 'A')
            out++;
    cout << out;
    return 0;
}