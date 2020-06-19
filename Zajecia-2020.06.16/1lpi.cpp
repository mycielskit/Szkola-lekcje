#include <bits/stdc++.h>

using namespace std;

bool isPrime(int a)
{
    if(a % 2 == 0)
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
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int a, b; cin >> a >> b;
    for(a; a <= b; a++)
        if(isPrime(a))
            cout << a << " ";
    return 0;
}