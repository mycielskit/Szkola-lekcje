#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream in("in.txt"), out("out.txt");
    const int n = 1000;
    bool change;
    int a[n], hold, i;
    srand(time(0));
    for(i = 0; i < n; i++)
    {
        a[i] = rand() % 2001 - 1000;
        in << a[i] << endl;
    }
    in.close();
    for(i = n - 1; i >= 0; i--)
    {
        change = false;
        for(int j = n - 1; j > n - i - 1;)
        {
            if(a[j] < a[--j])
            {
                change = true;
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
        if(!change)
            break;
    }
    cout << n - i - 1 << endl;
    for(int i = 0; i < n; i++)
        out << a[i] << endl;
    out.close();
    return 0;
}
