#include <bits/stdc++.h>

using namespace std;

int main()
{
    int out = 0, max = 0, min = 8888888, ai;
    string a;
    for(int i = 0; i < 5000; i++)
    {
        cin >> a;
        if(a.size() > 7)
            continue;
        for(int i = 1; i < a.size(); i++)
            if(a[i] < a[i - 1])
                goto end;
        ai = stoi(a);
        out++;
        if(max < ai)
            max = ai;
        if(min > ai)
            min = ai;
        end:;
    }
    cout << out << '\n' << max << '\n' << min;
}