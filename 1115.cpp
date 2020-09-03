#include <iostream>
using namespace std;

int main(){

    int a,b;

    while (true){
        cin >> a >> b;
        if(a && b){
            if(a > 0 && b > 0)
                cout << "primeiro\n";
            else if(a > 0 && b < 0)
                cout << "quarto\n";
            else if(a < 0 && b < 0)
                cout << "terceiro\n";
            else
                cout << "segundo\n";
        }else{
            break;
        }

    }
    return 0;
}
