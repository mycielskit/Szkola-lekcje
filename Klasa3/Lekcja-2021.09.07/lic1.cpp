#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int out = 0;
    for(int i = 0; i < 5000; i++)
    {
        cin >> a;
        if(a[0] == a[a.size() - 1])
            out++;
    }
    cout << out;
}