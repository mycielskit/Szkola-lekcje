#include <bits/stdc++.h>

using namespace std;

int main()
{
    float money, time, rate;
    cin >> money >> time;
    if(time <= 12)
        rate = 1.025;
    else if(time <= 24)
        rate = 1.05;
    else
        rate = 1.1;
    printf("%.2f", (money/time)*rate);
    return 0;
}
