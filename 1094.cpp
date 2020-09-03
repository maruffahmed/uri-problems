#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int i,n,total = 0, rabbit = 0, rat = 0, frog = 0;
    float p_rabbit, p_rat, p_frog;
    cin >> n;
    int amnt[n];
    char animal[n];
    for(i = 0; i < n; i++)

    {
        cin >> amnt[i];
        cin >> animal[i];
        total += amnt[i];
        if(animal[i] == 'C')
        {
            rabbit += amnt[i];
        }else if(animal[i] == 'R')
        {
            rat += amnt[i];
        }else
        {
            frog += amnt[i];
        }
    }
    p_rabbit = float(rabbit)/float(total)*100;
    p_rat = float(rat)/float(total)*100;
    p_frog = float(frog)/float(total)*100;

    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << rabbit << endl;
    cout << "Total de ratos: " << rat << endl;
    cout << "Total de sapos: " << frog << endl;
    cout << fixed << setprecision(2);
    cout << "Percentual de coelhos: " << p_rabbit << " %" << endl;
    cout << "Percentual de ratos: " << p_rat << " %" << endl;
    cout << "Percentual de sapos: " << p_frog << " %" << endl;

    return 0;
}
