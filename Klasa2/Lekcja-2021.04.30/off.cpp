#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j, k;
    bool l;
    string a;
    cin >> a;
    cout << a.substr(0, 3);
    for(int i = 3; i < a.size(); i++)
    {
        j = i - 3, l = 0;
        while(j >= 0)
        {
            k = 0;
            while(i + k < a.size() && j + k != i && a[j + k] == a[i + k])
                k++;
            if(k >= 3)
            {
                cout << '#' << char(i - j) << char(k);
                i = i + k - 1;
                l = 1;
                break;
            }
            j--;
        }
        if(!l)
            cout << a[i];
    }
    cout << "";
    return 0;
}