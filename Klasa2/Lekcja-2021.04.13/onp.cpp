#include <bits/stdc++.h>

using namespace std;

int main()
{
    stack<long double> st;
    long double second;
    string a, numop;
    getline(cin, a);
    stringstream s;
    s << a;
    while(s >> numop)
    {
        if(numop.size() == 1 && numop[0] < '0')
        {
            second = st.top();
            st.pop();
            switch(numop[0])
            {
                case '+':
                    second += st.top();
                    break;
                case '-':
                    second = st.top() - second;
                    break;
                case '*':
                    second *= st.top();
                    break;
                case '/':
                    second = st.top() / second;
                    break;
            }
            st.pop();
            st.push(second);
        }
        else
            st.push(stoi(numop));
    }
    cout << st.top();
}