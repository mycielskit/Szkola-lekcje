#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[10], hold;
    srand(time(0));
    for(int i = 0; i < 10; i++)
    {
        a[i] = rand() % 20001 - 10000;
        cout << a[i] << ' ';
    }
    for(int i = 9; i >= 0; i--)
    {
        cout << endl;
        for(int j = 9; j > 10 - i - 1;)
        {
            if(a[j] < a[--j])
            {
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
        for(int j = 0; j < 10; j++)
            cout << a[j] << ' ';
    }
    return 0;
}
