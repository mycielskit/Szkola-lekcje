#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, out = 0; cin >> n;
    bool a[n * n] = {};
    int x1, x2, h;
    while(1)
    {
        cin >> x1 >> x2 >> h;
        if(x1-- == 0 && x2 == 0 && h == 0)//check for 0 0 0
            break;
        for(int i = x1; i < x2; i++)
        {
            for(int j = 0; j < h; j++)
                a[i * n + j] = 1;
        }
    }
    for(int i = n - 1; i >= 0; i--)
    {
        for(int j = 0; j < n; j++)
            //cout << a[j * n + i] << ' ';
            out += a[j * n + i];
        //cout << "\b\n";
    }
    cout << out << endl;
}
