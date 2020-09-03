#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float A[100];
    for(int i = 0; i < 100; i++){
        cin >> A[i];
    }

    for(int i = 0; i < 100; i++){
        if(A[i] <= 10){
            cout << fixed << setprecision(1);
            cout << "A[" << i << "] = " << A[i] << "\n";
        }
    }
    return 0;
}
