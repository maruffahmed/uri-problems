#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <double> valid_score;
    double input;
    while(true){
        if(valid_score.size() == 2){
            cout << "media = " << (valid_score.front() + valid_score.back())/2 << endl;
            break;
        };
        cin >> input;
        if(input >= 0 && input <= 10){
            valid_score.push_back(input);
        }else{
            cout << "nota invalida\n";
        }
    }

    return 0;
}
