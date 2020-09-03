#include <iostream>

using namespace std;

int main(){
    int a,b,hour;

    cin >> a >> b;

    if(a >= b)
    {
        hour = (24 - a) + b;
        cout << "O JOGO DUROU " << hour << " HORA(S)" << endl;
    }
    else
    {
        hour = b - a;
        cout << "O JOGO DUROU " << hour << " HORA(S)" << endl;
    }

    return 0;
}
