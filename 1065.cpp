#include <iostream>
using namespace std;
int main()
{
    int num[5],i,counter = 0;
    for(i = 0; i < 5; i++)
    {
        cin >> num[i];
        if(num[i] % 2 == 0)
        {
            counter++;
        }
    }
    cout << counter << " valores pares" << endl;
    return 0;
}
