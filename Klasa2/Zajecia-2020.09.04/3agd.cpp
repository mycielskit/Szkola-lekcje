#include <bits/stdc++.h>

using namespace std;

int main()
{
    float money, time;
    cin >> money >> time;
    money /= time;
    if(time <= 12)
        money *= 1.025;
    else if(time <= 24)
        money *= 1.05;
    else
        money *= 1.1;
    printf("%.2f", money);
    return 0;
}
