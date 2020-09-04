#include <bits/stdc++.h>

using namespace std;

int main()
{
    int faca, facb, henry, score = 0;
    cin >> faca >> facb >> henry;
    for(int i = faca; i <= henry; i += faca)
    {
        if(i % facb)
            score++;
    }
    for(int i = facb; i <= henry; i += facb)
    {
        score++;
    }
    cout << score;
    return 0;
}
