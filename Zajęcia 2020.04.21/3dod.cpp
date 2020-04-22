#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{ 
    if(!b) 
        return a; 
    return gcd(b, a % b);  
} 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int l1, l2, m1, m2, g;
    cin >> l1 >> m1 >> l2 >> m2;//input
    g = m1 * m2 / gcd(m1, m2);//lcm
    l1 *= g / m1;//licznik 1
    l2 *= g / m2;//licznik 2
    l1 += l2;//suma liczników
    l2 = gcd(l1, g);//gcd licznika i mianownika
    l1 /= l2;
    g /= l2;
    if(l1 / g)
        cout << l1 / g << ' ';
    if(l1 % g)
        cout << l1 % g << '/' << g;
    return 0;
}