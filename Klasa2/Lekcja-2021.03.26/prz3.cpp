#include <bits/stdc++.h>

using namespace std;

struct Line
{
    int x1, y1, x2, y2;
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

/*int signum(int n)
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

int intersect(Line p1, Line p2)
{
    int d1 = det(p1.x1, p1.y1, p1.x2, p1.y2, p2.x1, p2.y1),
    d2 = det(p1.x1, p1.y1, p1.x2, p1.y2, p2.x2, p2.y2),
    d3 = det(p2.x1, p2.y1, p2.x2, p2.y2, p1.x1, p1.y1),
    d4 = det(p2.x1, p2.y1, p2.x2, p2.y2, p1.x2, p1.y2);
    if(!d1 && d1 != d2 || !d2 && d1 != d2 || !d3 && d3 != d4 || !d4 && d3 != d4)
        return 1;
    else if(d1 == -d2 && d3 == -d4)
        return 2;
    return 0;
}*/

int main()
{
    vector<pair<Line, bool>> lines;
    Line tline;
    bool b, check = 1;
    while(cin >> tline.x1 >> tline.y1 >> tline.x2 >> tline.y2)
    {
        if(!(tline.x1 || tline.y1 || tline.x2 || tline.y2))
            break;
        b = 1;
        for(int i = 0; i < lines.size(); i++)
        {
            if(intersect(lines[i].first, tline))
            {
                b = 0;
                lines[i].second = 0;
            }
        }
        lines.push_back(make_pair(tline, b));
    }
    for(int i = 0; i < lines.size(); i++)
    {
        if(lines[i].second)
        {
            check = 0;
            cout << lines[i].first.x1 << ' ' << lines[i].first.y1 << ' ' << lines[i].first.x2 << ' ' << lines[i].first.y2 << '\n';
        }
    }
    if(check)
        cout << 0;
}