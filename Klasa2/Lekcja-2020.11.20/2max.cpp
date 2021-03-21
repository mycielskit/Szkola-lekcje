#include <bits/stdc++.h>

using namespace std;

int main()
{
    int maxi, temp, out = 0;
    cin >> maxi;
    for(int i = 1; i < 100; i++)
    {
        cin >> temp;
        if(temp > maxi)
        {
            maxi = temp;
            out++;
        }
    }
    cout << out;
    return 0;
}