#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    while(1)
    {
        cin >> a;
        if(!a)
            return 0;
        int g = 2;
        for(int i = 2; i < a; i++)
        {
            if(!(a % i))
                g++;
        }
        cout << g << endl;
    }
}
