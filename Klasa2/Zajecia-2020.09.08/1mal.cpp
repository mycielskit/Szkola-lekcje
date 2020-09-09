#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    bool g = true;
    long long a[n];
    for(int i = 0; i < n; i++)
    {
        g = true;
        cin >> a[i];
        for(int j = 0; j < i; j++)
            if(a[j] > a[i])
            {
                g = false;
                break;
            }
        if(g)
            cout << a[i] << ' ';
    }
    return 0;
}
