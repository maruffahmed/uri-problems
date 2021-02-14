#include<bits/stdc++.h>
#define FOR(i, n) for (int i = 0; i < n; i++)
#define endl '\n'
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    while (n)
    {
        string str;
        stack<char> stk;
        int diamond = 0;

        cin >> str;

        FOR(i, str.length())
        {
            if (str[i] == '<') stk.push(str[i]);
            else if(str[i] == '>')
            {
                if(!stk.empty() && stk.top() == '<')
                {
                    diamond++;
                    stk.pop();
                }
            }

        }

        cout << diamond << endl;
        n--;
    }
    return 0;
}