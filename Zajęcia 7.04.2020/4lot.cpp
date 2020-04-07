#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    srand(time(0));
    int a[6];
    for(int i = 0; i < 6; ++i)
    {
        a[i] = rand() % 49 + 1;
        for(int g = 0; g < i; g++)
        {
            if(a[g] == a[i])
            {
                a[i] = rand() % 49 + 1;
                g = -1;
            }
        }
    }
    for(int i = 0; i < 6; i++)
    {
        cout << a[i] << ' ';
    }
    return 0;
}
