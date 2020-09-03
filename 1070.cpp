#include <iostream>
using namespace std;
int main()
{
    int num,i = 6;
    cin >> num;
    while(i)
    {
        if(num % 2 != 0)
        {
            cout << num << endl;
            i--;
        }
        num++;
    }
    return 0;
}
