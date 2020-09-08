#include <bits/stdc++.h>

using namespace std;
int a[20];

int minimum(int start)
{
    int test = a[start], pos = start;
    for(start; start < 20; start++)
        if(a[start] < test)
        {
            pos = start;
            test = a[start];
        }

    return pos;
}

void swap(int pos1, int pos2)
{
    int g = a[pos1];
    a[pos1] = a[pos2];
    a[pos2] = g;
}

int main()
{
    srand(time(0));
    for(int i = 0; i < 20; i++)
    {
        a[i] = rand() % 2001 - 1000;
        cout << a[i] << ' ';
    }
    cout << endl;
    for(int i = 0; i < 19; i++)
        swap(i, minimum(i));
    for(int i = 0; i < 20; i++)
        cout << a[i] << ' ';
    return 0;
}
