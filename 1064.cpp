#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float num[6],avg,sum = 0;
    int i,counter = 0;
    for(i = 0; i < 6; i++)
    {
        cin >> num[i];
        if(num[i] >= 0)
        {
            counter++;
            sum += num[i];
        }
    }
    avg = sum/counter;
    cout << counter << " valores positivos" << endl;
    cout << fixed << setprecision(1) << avg << endl;
    return 0;
}
