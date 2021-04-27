#include <bits/stdc++.h>

using namespace std;

int priority(char op)
{
    switch(op)
    {
        case '+': return 0;
        case '-': return 0;
        case '/': return 1;
        case '*': return 1;
        case '^': return 2;
    }
    return -1;
}

int main()
{
    string in, temp;
    getline(cin, in);
    stack<char> operators;
    for(int i = 0; i < in.size(); i++)
    {
        if(in[i] >= '0' && in[i] <= '9')
        {
            temp = in[i];
            while(i < in.size() && in[i + 1] >= '0' && in[i + 1] <= '9')
                temp += in[++i];
            cout << temp << ' ';
        }
        else if(in[i] >= 'a' && in[i] <= 'z' || in[i] >= 'A' && in[i] <= 'Z')
            cout << in[i] << ' ';
        else if(in[i] == '(')
            operators.push('(');
        else if(in[i] == ')')
        {
            while(operators.top() != '(')
            {
                cout << operators.top() << ' ';
                operators.pop();
            }
            operators.pop();
        }
        else if(in[i] == ' ')
            continue;
        else if(in[i] == '=')
            break;
        else
        {
            while(!operators.empty() && operators.top() != '(' && priority(operators.top()) >= priority(in[i]))
            {
                cout << operators.top() << ' ';
                operators.pop();
            }
            operators.push(in[i]);
        }
    }
    while(!operators.empty())
    {
        cout << operators.top() << ' ';
        operators.pop();
    }
    return 0;
}