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
        cout << "Zgadnij wartość liczby\n";
        for(attempts = 0; n != liczba; attempts++)
        {
            cin >> n;
            if(n > liczba)
                cout << "Za dużo\n";
            else if(n < liczba)
                cout << "Za mało\n";
        }
        cout << "Gratulacje! Zgadłeś po " << attempts << " próbach\nCzy chcesz zagrać ponownie? T/N\n";
        cin >> play;
        while(play != 't' && play != 'T' && play != 'n' && play != 'N')
        {
            cout << "Wczytano złą wartość, spróbuj ponownie\n";
            cin >> play;
        }
        if(play == 'n' || play == 'N')
            break;
    }
    return 0;
}