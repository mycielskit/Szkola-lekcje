#include <bits/stdc++.h>

using namespace std;

int main()
{
    ofstream in("in.txt"), out("out.txt");
    const int n = 10000;
    int a[n], hold;
    srand(time(0));
    for(int i = 0; i < n; i++)
    {
        a[i] = rand() % 20001 - 10000;
        in << a[i] << endl;
    }
    in.close();
    for(int i = n - 1; i >= 0; i--)
    {
        for(int j = n - 1; j > n - i - 1;)
        {
            if(a[j] < a[--j])
            {
                hold = a[j];
                a[j] = a[j + 1];
                a[j + 1] = hold;
            }
        }
    }
    for(int i = 0; i < n; i++)
        out << a[i] << endl;
    out.close();
    return 0;
}
