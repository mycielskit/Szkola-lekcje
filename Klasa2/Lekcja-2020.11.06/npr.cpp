#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum1 = 0, sum2 = 0, in; cin >> n;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < n; ++j)
        {
            cin >> in;
            if(j == i)
                sum1 += in;
            else if(j + i + 1 == n)
                sum2 += in;
        }
    }
    if(sum1 > sum2)
        cout << "LEWA";
    else if(sum1 < sum2)
        cout << "PRAWA";
    else
        cout << "ROWNE";
    return 0;
}