#include <bits/stdc++.h>

using namespace std;

int main()
{
    int maxx = 0, maxy = 0, maxval = -1, val;
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cin >> val;
            if(val > maxval)
            {
                maxx = j;
                maxy = i;
                maxval = val;
            }
        }
    }
    cout << maxx << ' ' << maxy << endl;
    return 0;
}