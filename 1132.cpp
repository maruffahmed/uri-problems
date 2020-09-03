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

    for(int i = x; i <= y; i++){
        if(i % 13 != 0)
            sum += i;
    }
    cout << sum << endl;

    return 0;
}
