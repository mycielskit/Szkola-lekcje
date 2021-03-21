#include <bits/stdc++.h>

using namespace std;

struct NODE
{
    NODE()
    {
        for(int &i : vals)
            i = rand() % 1001;
    }
    int vals[10];
    NODE *next = NULL;
};

void add(NODE * &stack)
{
    NODE *a = new NODE;
    a->next = stack;
    stack = a;
}

void pop(NODE * &stack)
{
    NODE *temp = stack->next;
    delete stack;
    stack = temp;
}

void deletestack(NODE * &stack)
{
    NODE *temp;
    while(stack)
    {
        temp = stack->next;
        delete stack;
        stack = temp;
    }
}