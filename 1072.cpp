#include <iostream>
using namespace std;
int main()
{
    int n,in = 0, out = 0,i;
    cin >> n;
    int num[n];
    for (i = 0; i  < n; i++)
    {
        cin >> num[i];
        if(num[i] >= 10 && num[i] <= 20)
        {
            in++;
        }else
        {
            out++;
        }
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}
