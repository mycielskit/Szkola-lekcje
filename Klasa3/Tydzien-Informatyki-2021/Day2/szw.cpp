#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

const int stepcombos[11] = {
    1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, in;
    unsigned long long out = 1;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> in;
        cout << (out *= stepcombos[in]) << ' ';
    }
    return 0;
}