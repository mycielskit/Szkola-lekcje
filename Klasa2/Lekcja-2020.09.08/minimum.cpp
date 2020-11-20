#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10];
    srand(time(0));
    for(int i = 0; i < 10; i++)
    {
        a[i] = rand() % 2001 - 1000;
        cout << a[i] << ' ';
    }
    int test = a[0], pos = 0;
    for(int i = 1; i < 10; i++)
        if(a[i] < test)
        {
            pos = i;
            test = a[i];
        }
    cout << endl << test << ' ' << pos;
    return 0;
}
