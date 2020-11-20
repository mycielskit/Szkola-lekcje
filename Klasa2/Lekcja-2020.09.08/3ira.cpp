#include <bits/stdc++.h>

using namespace std;
int a[1000], h = 0;

int minimum(int start, int n)
{
    int test = a[start], pos = start;
    for(start; start < n; start++)
        if(a[start] < test)
        {
            pos = start;
            test = a[start];
        }

    return pos;
}

void swap(int pos1, int pos2)
{
    if(pos1 == pos2)
        h++;
    int g = a[pos1];
    a[pos1] = a[pos2];
    a[pos2] = g;
}

int main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n - 1; i++)
    {
        swap(i, minimum(i, n));
    }
    cout << h;
    return 0;
}
