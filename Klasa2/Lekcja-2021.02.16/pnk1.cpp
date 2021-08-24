#include <bits/stdc++.h>

using namespace std;

bool isPrime(int a)
{
    if(a == 1 || !a)
        return 0;
    if(!(a & 1))
    {
        if(a == 2)
            return 1;
        else
            return 0;
    }
    for(int i = 3; a >= i*i; i += 2)
    {
        if(a % i == 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    int count = 0, x, y;
    for(int i = 0; i < 1000; i++)
    {
        cin >> x >> y;
        if(isPrime(x) && isPrime(y))
            count++;
    }
    cout << count;
    return 0;
}