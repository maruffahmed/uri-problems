#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float s,step_1 = 0,step_2 = 0,step_3 = 0,total_tax;
    string msg;
    cin >> s;

    if(s <= 2000)
    {
        cout << "Isento" << endl;
        return 0;
    }

    if(s > 2000 && s <= 3000)
    {
        step_1 += s - 2000;
    }else if(s > 3000 && s <= 4500)
    {
        step_1 += s - 2000;
        step_2 += step_1 - 1000;
        step_1 -= step_2;
    }else if(s > 4500)
    {
        step_1 += s - 2000;
        step_2 += step_1 - 1000;
        step_1 -= step_2;
        step_3 += step_2 - 1500;
        step_2 -= step_3;
    }

    step_1 = (step_1/100) * 8;
    step_2 = (step_2/100) * 18;
    step_3 = (step_3/100) * 28;
    total_tax = step_1 + step_2 + step_3;

    cout << fixed << setprecision(2);
    cout << "R$ " << total_tax << endl;

    return 0;
}
