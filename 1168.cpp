#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i,j,n,total = 0;
    string a;
    cin >> n;
    for(i = 0; i < n; i++)
    {
        cin >> a;
        for(j = 0; j < a.length(); j++)
        {
            if(a[j] == '1')
            {
                total += 2;
            }else if(a[j] == '2' || a[j] == '3' || a[j] == '5')
            {
                total += 5;
            }else if(a[j] == '4')
            {
                total += 4;
            }else if(a[j] == '6' || a[j] == '9' || a[j] == '0')
            {
                total += 6;
            }else if(a[j] == '7')
            {
                total += 3;
            }else if(a[j] == '8')
            {
                total += 7;
            }
        }
        cout << total << " leds" << endl;
        total = 0;
    }
    return 0;
}
