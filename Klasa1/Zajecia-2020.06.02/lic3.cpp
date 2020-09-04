#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    short a = 0; int maxi = 0, mini = 2000000; string in, sorted;
    for(int i = 0; i < 5000; i++)
    {
        cin >> in;
        sorted = in;
        sort(sorted.begin(), sorted.end());
        if(sorted == in)
        {
            if(stoi(in) > maxi)
                maxi = stoi(in);
            else if(stoi(in) < mini)
                mini = stoi(in);
            a++;
        }
    }
    cout << a << endl << maxi << endl << mini;
}