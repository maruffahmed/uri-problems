#include <iostream>
using namespace std;
int main()
{
    int i,num[100],big = 0,position;
    for(i = 0; i < 100; i++)
    {
        cin >> num[i];
        if(big < num[i])
        {
            big = num[i];
            position = i+1;
        }
    }
    cout << big << endl << position << endl;
    return 0;
}
