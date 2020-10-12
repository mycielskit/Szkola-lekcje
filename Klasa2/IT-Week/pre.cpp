#include <bits/stdc++.h>

//"We can solve any problem by introducing an extra level of indirection."

using namespace std;

bool intersect(pret a1, pret a2)
{
    return 0;
}

int powtwo(int a)
{
    return a * a;
}

struct pret
{
    int x1, y1, x2, y2;
    double l;
};

int main()
{
    bool graz = 1;
    int i = 0, x1, x2, y1, y2, s1 = 0, s2 = 0;
    pret prety[1000];
    while(++i)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        prety[i] = {x1, y1, x2, y2};
        prety[i].l = sqrt(powtwo(abs(x2 - x1)) + powtwo(abs(y2 - y1)));
        for(int j = 0; j < i; j++)
        {
            if(intersect(prety[i], prety[j]))

        }
    }
}
