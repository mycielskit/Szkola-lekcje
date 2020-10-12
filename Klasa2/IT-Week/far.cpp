#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, out = 0; cin >> n;
    int a[n] = {};
    int x1, x2, h;
    while(1)
    {
        cin >> x1 >> x2 >> h;
        if(!(x1--) && !x2 && !h)//check for 0 0 0
            break;
        for(int i = x1; i < x2; i++)
            a[i] = max(a[i], h);
    }
    for(int i = 0; i < n; i++)
        out += a[i];
    cout << out << endl;
}
