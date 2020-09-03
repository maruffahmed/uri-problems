#include <iostream>
#define ll long long
using namespace std;

ll int find_gcd(ll int a, ll int b){
    if ( a == 0) return b;
    if(b == 0) return a;
    if (a == b) return a;
    if(a % b == 0) return b;
    return find_gcd(b,a%b);
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        ll int a,b;
        cin >> a >> b;
        ll int gcd = find_gcd(a,b);
        cout << gcd << endl;
    }

    return 0;
}
