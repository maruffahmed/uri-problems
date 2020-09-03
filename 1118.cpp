#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main(){
    vector <double> valid_score;
    double input;
    int x;
    while(x != 2){
        if(valid_score.size() == 2){
            cout << "media = " << fixed << setprecision(2) << (valid_score.front() + valid_score.back())/2 << endl;
            valid_score.clear();
            do{
                cout << "novo calculo (1-sim 2-nao)\n";
                cin >> x;
                if(x == 2 || x == 1){
                    break;
                }
            }while(true);
        }
        if(x == 2) break;
        cin >> input;
        if(input >= 0 && input <= 10){
            valid_score.push_back(input);
        }else{
            cout << "nota invalida\n";
        }
    }

    return 0;
}
