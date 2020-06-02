#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    short a = 0; string in;
    for(int i = 0; i < 5000; i++)
    {
        cin >> in;
        if(in[0] == in[in.size() - 1])
            a++;
    }
    cout << a;
}