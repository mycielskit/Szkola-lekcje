#include <bits/stdc++.h>

using namespace std;

int main()
{
    float beeg, loong;
    cin >> beeg >> loong;
    loong /= 100;
    float score = (beeg / loong) / loong;
    if(score > 18.5 && score < 24.9)
        cout << "PRAWIDLOWA";
    else if(score <= 18.5)
        cout << "NIEDOWAGA";
    else
        cout << "NADWAGA";
    return 0;
}
