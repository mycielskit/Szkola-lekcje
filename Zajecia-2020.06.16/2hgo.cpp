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
    int n, a; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        for(int i = 2; i < (a / 2) + 1; i++)
            if(isPrime(i) && isPrime(a - i))
            {
                cout << i << " " << a - i << endl;
                break;
            }
    }
    return 0;
}