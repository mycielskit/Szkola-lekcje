#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, out = 0;
    string as;
    for(int i = 0; i < 5000; i++)
    {
        cin >> oct >> a;
        as = to_string(a);
        if(as[0] == as[as.size() - 1])
            out++;
    }
    cout << out;
}