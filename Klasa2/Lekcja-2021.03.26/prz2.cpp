#include <bits/stdc++.h>

using namespace std;

int signum(int n)
{
    if(!n)
        return 0;
    else if(n > 0)
        return 1;
    return -1;
}

int det(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return signum(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3);
}

int crossing(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int d1 = det(x1, y1, x2, y2, x3, y3),
    d2 = det(x1, y1, x2, y2, x4, y4),
    d3 = det(x3, y3, x4, y4, x1, y1),
    d4 = det(x3, y3, x4, y4, x2, y2);
    if(!d1 && d1 != d2 || !d2 && d1 != d2 || !d3 && d3 != d4 || !d4 && d3 != d4)
        return 1;
    else if(d1 == -d2 &&d3 == -d4)
        return 2;
    return 0;
}

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;
    for(int i = 0; i < 10; i++)
    {
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
        cout << crossing(x1, y1, x2, y2, x3, y3, x4, y4) << '\n';
    }
}