#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    srand(time(0));
    char play;
    int liczba, attempts, n;
    while(1)
    {
        liczba = (rand()%1001);
        cout << "Zgadnij wartosc liczby.\n";
        for(attempts = 0; n != liczba; attempts++)
        {
            cin >> n;
            if(n > liczba)
                cout << "Za duzo\n";
            else if(n < liczba)
                cout << "Za malo\n";
        }
        cout << "Gratulacje! Zgadles po " << attempts << " probach.\nCzy chcesz zagrac ponownie? T/N\n";
        cin >> play;
        while(play != 't' && play != 'T' && play != 'n' && play != 'N')
        {
            cout << "Wczytano zla wartosc, sprobuj ponownie.\n";
            cin >> play;
        }
        if(play == 'n' || play == 'N')
            break;
    }
    return 0;
}