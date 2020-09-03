#include <iostream>
using namespace std;
int main()
{
    int i,j = 7;
    for(i=1;i<=9;i+=2)
    {
        for(j;j>=5;j--)
        {
            cout << "I=" << i << " J=" << j << endl;
        }
        j += 5;
    }
    return 0;
}
