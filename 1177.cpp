
#include <iostream>

using namespace std;

int main() {

    int n[1000],t;
    cin >> t;

    for(int i = 0; i <= 1000;){
        for(int j = 0; j <= t; j++){
            n[i] = j;
            //cout << i << endl;
            i++;
        }
    }

    for(int i = 0; i <= 1000; i++)
        cout << "N["<<i<<"] = " << n[i] << endl;


    return 0;
}
