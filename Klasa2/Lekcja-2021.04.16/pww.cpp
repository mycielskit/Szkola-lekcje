#include <bits/stdc++.h>

using namespace std;

long long pt(long long a)
{
    return a * a;
}

struct Line
{
    long long x1, y1, x2, y2;
    void init(Line *self, long long x1, long long y1, long long x2, long long y2)
    {
        self -> x1 = x1;
        self -> y1 = y1;
        self -> x2 = x2;
        self -> y2 = y2;
    }
};

bool counterClockWise(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return (y3 - y1) * (x2 - x1) > (y2 - y1) * (x3 - x1);
}

bool intersect(Line p1, Line p2)
{
    bool a = counterClockWise(p1.x1, p1.y1, p2.x1, p2.y1, p2.x2, p2.y2) != counterClockWise(p1.x2, p1.y2, p2.x1, p2.y1, p2.x2, p2.y2);
    bool b = counterClockWise(p1.x1, p1.y1, p1.x2, p1.y2, p2.x1, p2.y1) != counterClockWise(p1.x1, p1.y1, p1.x2, p1.y2, p2.x2, p2.y2);
    return a && b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int gon;
    cin >> gon;
    Line poly[gon];
    int a, b, pa, pb, firsta, firstb, maxa = -10001;
    cin >> firsta >> firstb;
    maxa = max(maxa, firsta + 1);
    pa = firsta; pb = firstb;
    for(int i = 1; i < gon; i++)
    {
        cin >> a >> b;
        poly[i].init(&poly[i], pa, pb, a, b);
        maxa = max(maxa, a);
        pa = a; pb = b;
    }
    poly[0].init(&poly[0], a, b, firsta, firstb);
    int och, out = 0, count = 0;
    Line h;
    cin >> a >> b;
    h.init(&h, a, b, maxa + 1, b);
    for(int i = 0; i < gon; i++)
        count += intersect(poly[i], h);
    if(!(count % 2))
        cout << "NIE";
    else
        cout << "TAK";
    return 0;
}