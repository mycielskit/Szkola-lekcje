#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int in = 0, on = 0, out = 0, x, y;
    for(int i = 0; i < 1000; i++)
    {
        cin >> x >> y;
        if(x > 5000 || y > 5000)
            out++;
        else if(x == 5000 || y == 5000)
            on++;
        else
            in++;
    }
    cout << in << '\n' << on << '\n' << out;
    return 0;
}