#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cin >> n;
    for(i = 1; i <= 10; i++)
    {
        cout << i << " x " << n << " = " << n*i << endl;
    }
    return 0;
}