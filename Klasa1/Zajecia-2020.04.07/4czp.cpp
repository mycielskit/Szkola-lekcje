#include <bits/stdc++.h>

using namespace std;

string isPrime(int a)
{
    if(!(a & 1))
    {
        if(a == 2)
            return "TAK";
        else
            return "NIE";
        
    }
    for(int i = 3; a >= i*i; i += 2)
    {
        if(a % i == 0)
            return "NIE";
    }
    return "TAK";
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int n, a; cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        cout << isPrime(a) << endl;
    }
    return 0;
}