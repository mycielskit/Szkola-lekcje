#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, sum = 0; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    double avg = sum / n;
    bool t = false;
    for(int i = 0; i < n; i++)
    {
        if(a[i] > avg)
        {
            t = true;
            cout << a[i] << endl;
        }
    }
    if(!t)
        cout << "BRAK";
    return 0;
}