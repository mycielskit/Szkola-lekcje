#include <bits/stdc++.h>

using namespace std;

void scal(int pocz, int g, int n, int *t)
{
    int out[n] = {};
    for(int i = 0; i < n; i++)
        if(t[pocz] > t[g])
            out[i] = t[g++];
        else
        {
            out[i] = t[pocz++];
            if(pocz == g)
                pocz = n - 1;
        }
    for(int i = 0; i < n; i++)
        t[i] = out[i];
    return;
}

int main()
{
    int a[10] = {0, 2, 4, 7, 9, 1, 3, 5, 6, 8};
    scal(0, 5, 10, a);
    for(int i = 0; i < 10; i++)
        cout << a[i] << ' ';
    return 0;
}
