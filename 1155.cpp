#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    double i,result = 0,c;
    for(i=1; i<=100; i++)
    {
        c=1/i;
        result+=c;
    }
    cout << fixed << setprecision(2) << result << endl;

    return 0;
}
