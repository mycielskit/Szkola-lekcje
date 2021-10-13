#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a; int b;
    cin >> a;
    cout << a << '\n';
    do {
        b = 0;
        for(int i = 0; i < a.size(); i++)
            b += (a[i] - '0') * (a[i] - '0');
        a = to_string(b);
        cout << a << '\n';
    } while(b != 1 && b != 4);
    return 0;
}