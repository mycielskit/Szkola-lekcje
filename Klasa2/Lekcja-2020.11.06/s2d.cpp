#include <bits/stdc++.h>

using namespace std;

int biggest(int *t, int n)
{
    int index = 0;
    for(int i = 0; i < n; ++i)
        if(t[index] < t[i])
            index = i;
    return index;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, in; cin >> n;
    int sums[n] = {};
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> in;
            sums[i] += in;
        }
    }
    cout << biggest(sums, n) + 1;
    return 0;
}