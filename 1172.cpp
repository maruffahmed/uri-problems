#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x[10];
    for(int i = 0; i < 10; i++){
        cin >> x[i];
        if(x[i] == 0 || x[i] < 0){
            x[i] = 1;
        }
    }

    for(int i = 0; i < 10; i++){
        cout << "X[" << i << "] = " << x[i] << "\n";
    }
    return 0;
}
