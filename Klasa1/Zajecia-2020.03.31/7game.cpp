#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    srand(time(0));
    char play;
    int liczba, attempts, n;
    while(1)
    {
        liczba = (rand()%1001);
        cout << "Guess the value of a number.\n";
        for(attempts = 0; n != liczba; attempts++)
        {
            cin >> n;
            if(n > liczba)
                cout << "Too large\n";
            else if(n < liczba)
                cout << "Too small\n";
        }
        cout << "Congratulations! You guessed after " << attempts << " attempts.\nDo you want to play again? Y/N\n";
        cin >> play;
        while(play != 'y' && play != 'Y' && play != 'n' && play != 'N')
        {
            cout << "Incorrect symbol, please try again.\n";
            cin >> play;
        }
        if(play == 'n' || play == 'N')
            break;
    }
    return 0;
}