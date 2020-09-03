#include <iostream>
using namespace std;

int main()
{
    int i,counter = 0;
    float arr[6];
    for(i = 0; i < 6; i++)
    {
        cin >> arr[i];
        if(arr[i] >= 0)
        {
            counter++;
        }
    }
    cout << counter << " valores positivos" << endl;
    return 0;
}
