#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, w, out = 0, in, sum = 0;
    cin >> n >> w;
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        sum += in;
        if(sum >= w)
        {
            out++;
            sum = 0;
        }
    }
    cout << out;
    return 0;
}