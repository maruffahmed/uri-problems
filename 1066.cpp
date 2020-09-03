#include <iostream>
using namespace std;
int main()
{
    int num[5],i,ev_c=0,od_c=0,p_c=0,n_c=0;
    for(i = 0; i < 5; i++)
    {
        cin >> num[i];
        if(num[i] % 2 == 0)
        {
            ev_c++;
        }else
        {
            od_c++;
        }

        if(num[i] > 0)
        {
            p_c++;
        }else
        {
            if(num[i] != 0){
                n_c++;
            }

        }
    }
    cout << ev_c << " valor(es) par(es)" << endl;
    cout << od_c << " valor(es) impar(es)" << endl;
    cout << p_c << " valor(es) positivo(s)" << endl;
    cout << n_c << " valor(es) negativo(s)" << endl;
    return 0;
}
