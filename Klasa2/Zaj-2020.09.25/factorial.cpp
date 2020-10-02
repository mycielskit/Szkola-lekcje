#include <bits/stdc++.h>

using namespace std;

long long iterfact(long long a)
{
    long long ans = 1;
    for(int i = 2; i <= a; i++)
        ans *= i;
    return ans;
}

long long recfact(long long a)
{
    if(a <= 1)
        return 1;
    else
        return recfact(a - 1) * a;
}

int main()
{
    int last = 1, curr = 1;
    while(1)
    {
        if(last > iterfact(curr))
        {
            break;
        }
        else
        {
            last = iterfact(curr);
            curr++;
        }
    }
    cout << curr << ' ' << iterfact(curr) << ' ' << recfact(curr - 1);
    return 0;
}
