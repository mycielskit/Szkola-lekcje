#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool b;
    int a, out = 0;
    while(cin >> a)
    {
        b = true;
        if((!(a % 2) && a - 2) || !a || a == 1)
            continue;
        for(int i = 3; i * i <= a; i += 2)
            if(!(a % i))
                b = false;
        if(b)
            out++;
    }
    cout << out;
    return 0;
}
