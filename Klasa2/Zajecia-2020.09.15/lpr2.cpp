#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool b;
    int a, out = 0, maxnum = 0, minnum = 30000;
    while(cin >> a)
    {
        b = true;
        if((!(a % 2) && a - 2) || !a || a == 1)
            continue;
        for(int i = 3; i * i <= a; i += 2)
            if(!(a % i))
                b = false;
        if(b)
        {
            minnum = min(minnum, a);
            maxnum = max(maxnum, a);
        }
    }
    cout << maxnum << "\n" << minnum;
    return 0;
}
