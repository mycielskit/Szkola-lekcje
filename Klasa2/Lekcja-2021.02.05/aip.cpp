#include <bits/stdc++.h>

using namespace std;

string d2b(int n)
{
    string out = "00000000";
    short i = 7;
    do
        out[i--] = (n % 2) ? '1' : '0';
    while(n /= 2);
    return out;
}

int main()
{
    unsigned int a, b, c, d, e, a1, b1, c1, d1, a2, b2, c2, d2, ip, mask = ~0, net, broadcast;
    cin >> a >> b >> c >> d >> e;
    mask <<= 32 - e;
    ip = (a << 24) + (b << 16) + (c << 8) + d;
    net = ip & mask;
    broadcast = net | ~mask;
    a1 = (net >> 24), b1 = (net >> 16) & 255, c1 = (net >> 8) & 255, d1 = net & 255;
    a2 = (broadcast >> 24), b2 = (broadcast >> 16) & 255, c2 = (broadcast >> 8) & 255,
    d2 = broadcast & 255;
    cout << a1 << '.' << b1 << '.' << c1 << '.' << d1 << '\n';
    cout << a2 << '.' << b2 << '.' << c2 << '.' << d2 << '\n';
    cout << d2b(a) << ' ' << d2b(b) << ' ' << d2b(c) << ' ' << d2b(d) << '\n';
    cout << d2b(mask >> 24) << ' ' << d2b((mask >> 16) & 255) << ' ' << d2b((mask >> 8) & 255)
    << ' ' << d2b(mask & 255) << '\n';
    cout << d2b(a1) << ' ' << d2b(b1) << ' ' << d2b(c1) << ' ' << d2b(d1) << '\n';
    cout << d2b(~mask >> 24) << ' ' << d2b((~mask >> 16) & 255) << ' ' << d2b((~mask >> 8) & 255)
    << ' ' << d2b(~mask & 255) << '\n';
    cout << d2b(a2) << ' ' << d2b(b2) << ' ' << d2b(c2) << ' ' << d2b(d2) << '\n';
    return 0;
}