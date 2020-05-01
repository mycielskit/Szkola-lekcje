#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<double> boki;
    double a;
    for(int i = 0; i < 3; i++)
    {
        cin >> a;
        boki.push_back(a);
    }//yes, I stored it in a vector. Shut up.
    sort(boki.begin(), boki.end());//Hi Mati
    if((boki[0] + boki[1]) <= boki[2])
        cout << -1 << endl;
    else
    {
        double p = (double)(boki[0] + boki[1] + boki[2]) / 2;
        printf("%.6f", sqrt(p * (p - boki[0]) * (p - boki[1]) * (p - boki[2])));
    }//"It just works"
    return 0;
}