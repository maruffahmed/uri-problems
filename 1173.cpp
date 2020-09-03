#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x[10], num;
    cin >> num;
    x[0] = num;
    for(int i = 1; i < 10; i++){
        x[i] = x[i-1] * 2;
    }

    for(int i = 0; i < 10; i++){
        cout << "N[" << i << "] = " << x[i] << "\n";
    }
    return 0;
}
