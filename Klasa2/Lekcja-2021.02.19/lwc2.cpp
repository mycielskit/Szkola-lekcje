#include <bits/stdc++.h>

using namespace std;

int main()
{
    int curr, last, first, maxfirst, maxlast, length = 2, currdiff, maxlength = 0;
    cin >> last >> curr;
    currdiff = abs(last - curr);
    first = last;
    last = curr;
    for(int i = 2; i < 1000; i++)
    {
        cin >> curr;
        if(abs(last - curr) == currdiff)
            length++;
        else
        {
            if(length > maxlength)
            {
                maxfirst = first;
                maxlast = last;
                maxlength = length;
            }
            length = 2;
            first = last;
            currdiff = abs(last - curr);
        }
        last = curr;
    }
    cout << maxlength << '\n' << maxfirst << '\n' << maxlast;
    return 0;
}