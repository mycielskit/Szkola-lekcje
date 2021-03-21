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
    string a;
    int sum;
    for(int i = 0; i < 100; i++)
    {
        cin >> a;
        sum = 0;
        for(char i : a)
            sum += i - '0';
        if(isPrime(sum))
            cout << a << '\n';
    }
    return 0;
}