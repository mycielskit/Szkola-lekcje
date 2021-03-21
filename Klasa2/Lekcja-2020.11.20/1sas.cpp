#include <bits/stdc++.h>

using namespace std;

const int N = 320;

int main()
{
    int side, corner, ssum = 0, csum = 0;
    cin >> corner >> side;
    csum += corner;
    ssum += side;
    cin >> corner >> side;
    csum += corner;
    ssum += side;
    cin >> corner >> side >> corner;
    csum += corner;
    ssum += side;
    cin >> side >> corner;
    csum += corner;
    ssum += side;
    if(ssum > csum)
        cout << "B ";
    else
        cout << "N ";
    cout << abs(ssum - csum);
    return 0;
}