#include <bits/stdc++.h>

using namespace std;
int a[20], out[20];

int minimum()
{
    int test = a[0], pos = 0;
    for(int i = 1; i < 20; i++)
        if(a[i] < test)
        {
            pos = i;
            test = a[i];
        }
    return pos;
}

int maximum()
{
    int test = a[0], pos = 0;
    for(int i = 1; i < 20; i++)
        if(a[i] > test)
        {
            pos = i;
            test = a[i];
        }
    return pos;
}

int main()
{
    srand(time(0));
    for(int i = 0; i < 20; i++)
    {
        a[i] = rand() % 2001 - 1000;
        cout << a[i] << ' ';
    }
    cout << endl << a[maximum()] << endl;
    for(int i = 0; i < 20; i++)
    {
        out[i] = a[minimum()];
        a[minimum()] = a[maximum()] + 1;
    }
    for(auto val : out)
        cout << val << ' ';
    return 0;
}
