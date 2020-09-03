#include <iostream>
using namespace std;

int main()
{
    int f_d, f_h, f_m, f_s, l_d, l_h, l_m, l_s;
    int ctr_d = 0, ctr_h = 0, ctr_m = 0, ctr_s =0;
    string cln;
    bool ver_h = false, ver_m = false, ver_s = false;
    cin >> cln >> f_d;
    cin >> f_h >> cln >> f_m >> cln >> f_s;
    cin >> cln >> l_d;
    cin >> l_h >> cln >> l_m >> cln >> l_s;
    if(f_h > l_h)
        ver_h = true;
    if(f_m > l_m)
        ver_m = true;
    if(f_s > l_s)
        ver_s = true;
    while(f_d != l_d)
    {
        ctr_d++;
        f_d++;
    }
    while (f_h != l_h)
    {
        ctr_h++;
        f_h++;
        if(f_h == 25)
            f_h = 1;
    }
    while(f_m != l_m)
    {
        ctr_m++;
        f_m++;
        if(f_m == 61)
            f_m = 1;
    }
    while (f_s != l_s)
    {
        ctr_s++;
        f_s++;
        if(f_s == 61)
            f_s = 1;
    }
    if(ver_h)
        ctr_h--;
    if(ver_m)
        ctr_m--;
    if(ver_s)
        ctr_s--;

    cout << ctr_d << " dia(s)" << endl;
    cout << ctr_h << " hora(s)" << endl;
    cout << ctr_m << " minuto(s)" << endl;
    cout << ctr_s << " segundo(s)" << endl;
    return 0;
}
