#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, suma, count = 0; cin >> n;
    bool isprime[2600] = {0, 0, 1};
    string a;
    for(int i = 2599; i > 2; i -= 2)
    {
        isprime[i] = 1;
        for(int j = 2 * i; j < 2600; j += i)
            isprime[j] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        suma = 0;
        cin >> a;
        for(char j : a)
            suma += j;
        if(isprime[suma])
            count++;
    }
    cout << count;
    return 0;
}