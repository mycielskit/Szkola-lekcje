#include <bits/stdc++.h>

using namespace std;

int main()
{
    int listout[2000][2];
    bool b, wasprime;
    int a, out = 0, lastnum = -1;
    while(cin >> a)
    {
        b = true;
        if((!(a % 2) && a - 2) || !a || a == 1)
            b = false;
        for(int i = 3; i * i <= a; i += 2)
            if(!(a % i))
                b = false;
        if(b)
        {
            if(abs(lastnum - a) == 2 && wasprime)
            {
                listout[out][0] = lastnum;
                listout[out][1] = a;
                out++;
            }
            wasprime = true;
        }
        else
            wasprime = false;
        lastnum = a;
    }
    cout << out << endl;
    for(int i = 0; i < out; i++)
    {
        cout << listout[i][0] << ' ' << listout[i][1] << endl;
    }
    return 0;
}
