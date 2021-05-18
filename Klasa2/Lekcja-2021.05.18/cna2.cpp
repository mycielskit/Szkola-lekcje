#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string a;
    bool correct;
    for(int i = 0; i < n; i++)
    {
        correct = 1;
        cin >> a;
        for(int j = 1; j < a.size(); j++)
        {
            if(a[j] <= a[j - 1])
            {
                correct = 0;
                break;
            }
        }
        if(correct)
            cout << a << '\n';
    }
    return 0;
}