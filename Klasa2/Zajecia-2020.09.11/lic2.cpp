#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
}

int main()
{
    const int n = 1000;
    int a, b, ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if(gcd(a, b) == 1)
            ans++;
    }
    cout << ans;
    return 0;
}
