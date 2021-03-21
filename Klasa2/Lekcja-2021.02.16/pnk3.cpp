#include <bits/stdc++.h>

#define N 1000

using namespace std;

long long sqr(long long a)
{
    return a * a;
}

int main(void)
{
    int x[N] = {}, y[N] = {};
    long long maxdist = 0;
    int i1, i2;
    for (int i = 0; i < N; i++)
        cin >> x[i] >> y[i];
    for (int i = 0; i < N; i++)
        for(int j = i + 1; j < N; j++)
            if(sqr(x[i] - x[j]) + sqr(y[i] - y[j]) > maxdist)
                maxdist = sqr(x[i] - x[j]) + sqr(y[i] - y[j]), i1 = i, i2 = j;
    if(y[i1] < y[i2])
        swap(i1, i2);
    cout << x[i1] << " " << y[i1] << '\n' << x[i2] << ' ' << y[i2] << '\n';
    return 0;
}