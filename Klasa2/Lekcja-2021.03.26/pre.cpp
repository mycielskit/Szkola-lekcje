#include <bits/stdc++.h>

using namespace std;

long long pt(long long a)
{
    return a * a; // Yes.
}

struct Pret
{
    bool used = false;
    long long x1, y1, x2, y2, l;
    //double a, b;
    void init(Pret *self, long long x1, long long y1, long long x2, long long y2) // Pointers. Yay?
    {
        self -> x1 = x1;
        self -> y1 = y1;
        self -> x2 = x2;
        self -> y2 = y2;
        self -> l = pt(x1 - x2) + pt(y1 - y2);
        //self -> a = double(y1 - y2) / (x1 - x2); // comes from {ax1 + b = y1 and ax2 + b = y2
        //self -> b = y1 - a * x1;
    }
};

bool counterClockWise(int x1, int y1, int x2, int y2, int x3, int y3)
{
    return (y3 - y1) * (x2 - x1) > (y2 - y1) * (x3 - x1);
}

bool intersect(Pret p1, Pret p2)
{
    bool a = counterClockWise(p1.x1, p1.y1, p2.x1, p2.y1, p2.x2, p2.y2) != counterClockWise(p1.x2, p1.y2, p2.x1, p2.y1, p2.x2, p2.y2);
    bool b = counterClockWise(p1.x1, p1.y1, p1.x2, p1.y2, p2.x1, p2.y1) != counterClockWise(p1.x1, p1.y1, p1.x2, p1.y2, p2.x2, p2.y2);
    return a && b;
}

/*bool intersect(Pret a, Pret b)
{
    double x = (b.b - a.b) / (a.a - b.a); //a.ax + a.b = b.ax + b.b
    if(x < min(a.x1, a.x2) || x > max(a.x1, a.x2) || x < min(b.x1, b.x2) || x > max(b.x1, b.x2))
        return false;
    double y = a.a * x + a.b;
    if(y < min(a.y1, a.y2) || y > max(a.y1, a.y2) || y < min(b.y1, b.y2) || y > max(b.y1, b.y2))
        return false;
    return true;
}*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long i = -1, max, x1, x2, y1, y2, maxindex, s[2] = {};
    Pret prety[1000];
    while(++i + 1)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        if(!x1 && !y1 && !x2 && !y2)
            break;
        prety[i].init(&prety[i], x1, y1, x2, y2);
        maxindex = i;
        for(int j = 0; j < i; j++)
        {
            if(!prety[j].used && intersect(prety[j], prety[i])) // check whether the bar was taken and whether it intersects.
                if(maxindex == i || prety[j].l > prety[maxindex].l) // if it is the first one (i is still maxindex) or is the largest ones
                    maxindex = j;
        }
        if(maxindex != i)
        {
            s[i % 2] += prety[maxindex].l + prety[i].l; // add the two lengths
            prety[i].used = 1; prety[maxindex].used = 1; // set those two to used
        }
    }
    cout << abs(s[0] - s[1]) << endl;
    return 0;
}