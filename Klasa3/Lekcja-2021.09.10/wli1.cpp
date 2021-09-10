#include <bits/stdc++.h>

using namespace std;

bool isPrime(int a)
{
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

int main()
{
    int c = 0, maxi = 0, mini = 100000, a;
    for(int i = 0; i < 5000; i++)
    {
        cin >> a;
        if(isPrime(a))
        {
            c++;
            if(a > maxi)
                maxi = a;
            if(a < mini)
                mini = a;
        }
    }
    cout << c << '\n' << maxi << '\n' << mini << '\n';
}