#include <iostream>
using namespace std;
int main()
{
    int num,i;
    cin >> num;
    for(i = 1; i <= num; i++)
    {
        if(i % 2 != 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}
