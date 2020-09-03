#include <iostream>
using namespace std;

void sort(int &x,int &y){
    int temp;
    if(x > y){
        temp = x;
        x = y;
        y = temp;
    }
}

int main(){

    int x,y,sum = 0;
    cin >> x >> y;
    sort(x,y);

    for(int i = x+1; i < y; i++){
        if(i % 5 == 2 || i % 5 == 3)
            cout << i << endl;
    }

    return 0;
}
