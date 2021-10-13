#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, maxi = 0, c = 0, a;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        switch(a)
        {
            case 0:
                c++;
                break;
            case 1:
                maxi = max(maxi, c);
                c = 0;
                break;
        }
    }
    maxi = max(maxi, c);
    cout << maxi;
    return 0;
}