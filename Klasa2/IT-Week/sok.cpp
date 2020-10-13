#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, a = 0, b = 5; cin >> n;
    while(a <= n)
    {
        a += b;
        b *= 2;
    }
    a -= b / 2; b /= 4;
    switch(int(ceil(double(n - b) / (a - b))))
    {
        case 1: cout << "Adam"; break;
        case 2: cout << "Bogdan"; break;
        case 3: cout << "Cezary"; break;
        case 4: cout << "Damian"; break;
        case 5: cout << "Edward"; break;
    }
    return 0;
}
