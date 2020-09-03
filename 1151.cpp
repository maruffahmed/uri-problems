#include <iostream>
using namespace std;


int main(){
    int n1=0,n2=1,n3,n,i;
    cin >> n;
    cout << n1 << " " << n2 << " ";

    for(i = 2; i < n; ++i){
     n3 = n1+n2;
     n1 = n2;
     n2 = n3;
     cout << n3;
     if(i < n-1){
        cout << " ";
     }else{
        cout << endl;
     }
    }

    return 0;
}
