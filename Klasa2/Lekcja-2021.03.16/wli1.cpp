#include <bits/stdc++.h>

using namespace std;

const int N = 1000001;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int in, count = 0, min = 1000000, max = 0;
    bool sieve[N] = {0, 0, 1, 1};
    for(int i = 3; i < N; i += 2)
        sieve[i] = 1;
    for(int i = 3; i < N; i += 2)
    {
        if(!sieve[i])
            continue;
        for(int j = 3 * i; j < N; j += 2 * i)
            sieve[j] = 0;
    }
    for(int i = 0; i < 5000; i++)
    {
        cin >> in;
        if(sieve[in])
        {
            count++;
            if(in > max)
                max = in;
            if(in < min)
                min = in;
        }
    }
    cout << count << '\n' << max << '\n' << min;
    return 0;
}