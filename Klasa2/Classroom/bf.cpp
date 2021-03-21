#include <iostream>
#include <stack>

#define RITARN return

using namespace std;

int main() {
    char a[30000] = {};
    int ptr = 0, temp = 0;
    stack<int> brackets;
    string code = "";//, out = "";
    cin >> code;
    //code = ">++++[<++++++++>-]>++++++++[>++++<-]>>++>>>+>>>+<<<<<<<<<<[-[->+<]>[-<+>>>.<<]>>>[[->++++++++[>++++<-]>.<<[->+<]+>[->++++++++++<<+>]>.[-]>]]+<<<[-[->+<]+>[-<+>>>-[->+<]++>[-<->]<<<]<<<<]++++++++++.+++.[-]<]+++++";
    //code = "[+[]]+.";
    for (int i = 0; i < code.size(); i++) {
        switch (code[i]) {
            case '+':
                a[ptr]++;
                break;
            case '-':
                a[ptr]--;
                break;
            case '<':
                ptr--;
                break;
            case '>':
                ptr++;
                break;
            case '[':
                if (!a[ptr]) {
                    while (++i) {
                        if (code[i] == '[') {
                            temp++;
                        } else if (code[i] == ']') {
                            if (temp)
                                temp--;
                            else
                                break;
                        }
                    }
                }
                else
                    brackets.push(i);
                break;
            case ']':
                if (a[ptr]) {
                    i = brackets.top();
                } else {
                    brackets.pop();
                }
                break;
            case '.':
                putchar(a[ptr]);
                break;
            case ',':
                a[ptr] = getchar();
                break;
        }
    }
    RITARN 0;
}