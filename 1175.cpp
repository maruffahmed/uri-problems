#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A[20];
    for(int i = 0; i < 20; i++){
        cin >> A[i];
    }
    int j = 0;
    for(int i = 19; i >= 10; i--){
        int tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
        j++;
    }
    for(int i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << A[i] << "\n";
    }
    return 0;
}
