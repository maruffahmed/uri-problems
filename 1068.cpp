#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#define FOR(i, n) for (int i = 0; i < n; i++)
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    string str;
    while (getline(cin, str))
    {
        stack<char> list;
        FOR(i, str.length())
        {
            if (str[i] == '(')
            {
                list.push(str[i]);
            }
            else if (str[i] == ')')
            {
                if (!list.empty())
                {
                    list.pop();
                }
                else
                {
                    list.push(str[i]);
                }
            }
        }
        if (list.empty())
            cout << "correct" << endl;
        else
            cout << "incorrect" << endl;
    }
}