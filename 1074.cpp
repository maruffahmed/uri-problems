#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cin >> n;
    int num[n];
    for(i = 0; i < n; i++)
    {
        cin >> num[i];
        if(num[i] > 0 && num[i] % 2 == 0)
        {
            cout << "EVEN POSITIVE" << endl;
        }else if(num[i] > 0 && num[i] % 2 != 0)
        {
            cout << "ODD POSITIVE" << endl;
        }else if(num[i] < 0 && num[i] % 2 == 0)
        {
            cout << "EVEN NEGATIVE" << endl;
        }else
        {
            if(num[i] != 0)
            {
                cout << "ODD NEGATIVE" << endl;
            }else
            {
                cout << "NULL" << endl;
            }

        }
    }

    return 0;
}
