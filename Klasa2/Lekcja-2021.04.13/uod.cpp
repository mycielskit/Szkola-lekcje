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

int main()
{
    Line lines[4];
    for(int i = 0; i < 5; i++)
    {
        cin >> lines[0].x1 >> lines[0].y1 >> lines[0].x2 >> lines[0].y2;
        cin >> lines[1].x1 >> lines[1].y1 >> lines[1].x2 >> lines[1].y2;
        cin >> lines[3].x1 >> lines[3].y1 >> lines[3].x2 >> lines[3].y2;
        lines[2].x1 = lines[1].x2, lines[2].y1 = lines[1].y2, lines[2].x2 = lines[3].x1, lines[2].y2 = lines[3].y1;
        if(!(intersect(lines[0], lines[1]) && intersect(lines[0], lines[3])))
        {
            cout << "0";
        }
        else
        {
            if(intersect(lines[0], lines[2]))
                cout << "2";
            else
                cout << "1";
        }
    }
}