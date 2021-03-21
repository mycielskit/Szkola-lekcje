#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    int last, curr, mini, maxi;
    cin >> last;
    for (int i = 1; i < 1000; i++)
    {
        cin >> curr;
        mini = min(abs(curr - last), mini);
        maxi = max(abs(curr - last), maxi);
        last = curr;
    }
    cout << maxi << '\n' << mini;
    return 0;
}