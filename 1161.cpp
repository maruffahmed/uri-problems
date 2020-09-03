#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    long long int x,y,f1=1,f2=1;

    while(scanf("%lld %lld",&x,&y)!=EOF){
        cin >> x >> y;
        for(int i = 2; i <= x; i++)
            f1 *= i;
        for(int i = 2; i <= y; i++)
            f2 *= i;

        cout << f1 + f2 << endl;
    }

    return 0;
}
