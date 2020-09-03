#include <iostream>

using namespace std;

int fib(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 1;

    int n1=1,n2=1,n3,result;
    result = n1 + n2;
    for(int i = 3; i < n; i++){
        n3 = n1+n2;
        n1=n2;
        n2=n3;
        result += n3;
    }
    return result;
}

int main() {

    int t,n;
    cin >> t;

    while(t){
        cin >> n;
        int result = fib(n);
        cout << "Fib(" << n << ")= " << result << endl;
        t--;
    }

    return 0;
}
