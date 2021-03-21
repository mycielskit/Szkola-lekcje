#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

struct Cell
{
    int neighbours = 0;
    bool full = 0;
};

Cell a[22][22];
int temp[22][22] = {};

void changeNeigbours(int i, int j, int plus)
{
    temp[i-1][j-1] += plus;
    temp[i][j-1] += plus;
    temp[i-1][j] += plus;
    temp[i+1][j-1] += plus;
    temp[i-1][j+1] += plus;
    temp[i][j+1] += plus;
    temp[i+1][j] += plus;
    temp[i+1][j+1] += plus;
    return;
}

int main()
{
    int c = 49;
    for(int i = 1; i <= 20; i++)
    {
        for(int j = 1; j <= 20; ++j)
        {
            if(rand() % 2)
            {
                changeNeigbours(i, j, 1);
                a[i][j].full = true;
            }
            cout << (a[i][j].full ? '#' : '.');
        }
        cout << endl;
    }
    cout << endl;
    while(c--)
    {
        Sleep(1000);
        //this_thread::sleep_for(chrono::seconds(1));
        system("cls");
        for(int i = 1; i <= 20; ++i)
            for(int j = 1; j <= 20; ++j)
                a[i][j].neighbours = temp[i][j];
        for(int i = 1; i <= 20; ++i)
        {
            for(int j = 1; j <= 20; ++j)
            {
                if(a[i][j].full)
                {
                    if(a[i][j].neighbours <= 1 || a[i][j].neighbours >= 4)
                    {
                        a[i][j].full = false;
                        changeNeigbours(i, j, -1);
                    }
                }
                else
                {
                    if(a[i][j].neighbours == 3)
                    {
                        a[i][j].full = true;
                        changeNeigbours(i, j, 1);
                    }
                }
                cout << (a[i][j].full ? '#' : '.');
            }
            cout << endl;
        }
        cout << endl;
    }
}