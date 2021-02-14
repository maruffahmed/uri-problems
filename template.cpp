#include<bits/stdc++.h>
#define FOR(i, n) for (int i = 0; i < n; i++)
#define endl '\n'
using namespace std;

void display(stack<int> elm)
{
    while(!elm.empty())
    {
        cout << elm.top();
        elm.pop();
    }
}

int GCD(int a, int b)
{
    while(b > 0)
    {
        a = a % b;
        a ^= b;
        b ^= a;
        a ^= b;
    }

    return a;
}


int LCM(int a, int b)
{
    return (a*b)/GCD(a,b);
}

int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //cout << c;
    // cout << ((7 % 5) * (11 % 5) * (23 % 5)) % 5;
    cout << GCD(30,15) << endl;
    cout << LCM(30,15);
    return 0;
}