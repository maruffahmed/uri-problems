#include <iostream>
#include <iomanip>
using namespace std;

double divi(double &x,double &y)throw(int){
    if(y == 0) throw 0;
    return x/y;
}

int main(){

    int n;
    double x,y,z;

    cin >> n;

    while (n){
        cin >> x >> y;
        try{
            z = divi(x,y);

            cout << fixed << setprecision(1) << z << endl;
        }catch(int e){
            cout << "divisao impossivel\n";
        }
        n--;
    }

    return 0;
}
