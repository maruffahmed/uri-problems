#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int i,n;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            cout << fixed << setprecision(0) << i << "^2 = " << pow(i,2) << endl;
        }
    }
    return 0;
}
