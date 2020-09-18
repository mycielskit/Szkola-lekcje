#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, lastnum = 0;
    bool g;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    while(1)
    {
        g = true;
        random_shuffle(a, a + n);
        lastnum = a[0];
        for(int i = 1; i < n; i++)
        {
            if(a[i] >= lastnum)
                lastnum = a[i];
            else
            {
                g = false;
                break;
            }
        }
        if(g)
            break;
    }
    for(auto c : a)
        cout << c << ' ';
    return 0;
}
