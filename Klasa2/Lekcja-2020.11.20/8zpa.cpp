#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int pairs[2][n];
    for(int i = n - 1; i >= 0; i--)
    {
        cin >> pairs[0][i] >> pairs[1][i];
        if(pairs[0][i] < pairs[1][i])
            swap(pairs[0][i], pairs[1][i]);
    }
    for(int i = 0; i < n; i++)
        cout << pairs[0][i] << ' ' << pairs[1][i] << ' ';
    return 0;
}