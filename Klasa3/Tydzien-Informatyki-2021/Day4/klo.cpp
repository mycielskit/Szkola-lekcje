#include <bits/stdc++.h>

#define mp make_pair
#define pb push_back
#define ll long long
#define ull unsigned long long

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    stack<ull> a, b;
    ull abl, bbl, ab, bb, asize = 0, bsize = 0, count = 0;
    cin >> abl >> bbl;
    for(int i = 0; i < abl; i++)
    {
        cin >> ab;
        asize += ab;
        a.push(ab);
    }
    for(int i = 0; i < bbl; i++)
    {
        cin >> bb;
        bsize += bb;
        b.push(bb);
    }
    while(asize != bsize)
    {
        if(asize > bsize)
        {
            asize -= a.top();
            a.pop();
            count++;
        }
        else
        {
            bsize -= b.top();
            b.pop();
            count++;
        }
    }
    cout << count;
    return 0;
}