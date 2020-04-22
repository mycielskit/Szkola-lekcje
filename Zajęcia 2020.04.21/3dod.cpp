#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{ 
    if(b == 0) 
        return a; 
    return gcd(b, a % b);  
} 

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int l1, l2, m1, m2, g;
    cin >> l1 >> m1 >> l2 >> m2;
    g = m1 * m2 / gcd(m1, m2);
    l1 *= g / m1;
    l2 *= g / m2;
    l1 += l2;
    l2 = gcd(l1, g);
    l1 /= l2;
    g /= l2;
    if(l1 / g)
        cout << l1 / g << ' ';
    if(l1 % g)
        cout << l1 % g << '/' << g;
    return 0;
}