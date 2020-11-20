#include <bits/stdc++.h>

using namespace std;

void insertionSort(int *t, int n)
{
    int temp, g;
    for(int i = 1; i < n; i++)
    {
        temp = t[i];
        g = i;
        while(t[g - 1] > temp && g > 0)
        {
            t[g] = t[g - 1];
            g--;
        }
        t[g] = temp;
        for(int c = 0; c < n; c++)
            cout << t[c] << ' ';
        cout << endl;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(auto & c : a)
    {
        c = rand() % 101;
        cout << c << ' ';
    }
    cout << endl;
    insertionSort(a, n);
    for(auto c : a)
        cout << c << ' ';
    return 0;
}
