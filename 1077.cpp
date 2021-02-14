#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#define FOR(i, n) for (int i = 0; i < n; i++)
#define endl '\n'
using namespace std;

int priority(char symbol)
{
    switch(symbol)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    default :
        return 0;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    while (n)
    {
        stack<char> stk;
        string infix, postfix;
        cin >> infix;
        stk.push('(');
        infix += ")";
        FOR(i, infix.length())
        {
            if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '^')
            {
                while (priority(stk.top()) >= priority(infix[i]))
                {
                    postfix += stk.top();
                    stk.pop();
                }
                stk.push(infix[i]);
            }
            else if (infix[i] == '(')
            {
                stk.push(infix[i]);
            }
            else if (infix[i] == ')')
            {
                while (stk.top() != '(')
                {
                    postfix += stk.top();
                    stk.pop();
                }
                stk.pop();
            }
            else
            {
                postfix += infix[i];

            }
        }
        cout << postfix << endl;
        n--;
    }
    return 0;
}
