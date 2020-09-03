#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int i,j;
    double a,b,c,temp,num[3];
    // Taking input
    for(i = 0; i < 3; i++)
    {
        cin >> num[i];
    }
    //Shorting
    for(i = 0; i < 3; i++)
    {
        for(j = i+1; j < 3; j++)
        {
            if(num[i] < num[j])
            {
                a = num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
    // Assigning to 3 side value
    a = num[0], b = num[1], c = num[2];

    if(a >= (b+c))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
    }else if(pow(a,2) == (pow(b,2)+pow(c,2)))
    {
        cout << "TRIANGULO RETANGULO" << endl;
    }else if(pow(a,2) > (pow(b,2)+pow(c,2)))
    {
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }else if(pow(a,2) < (pow(b,2)+pow(c,2)))
    {
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    if(a == b && b != c)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }else if(b == c && c != a)
    {
        cout << "TRIANGULO ISOSCELES" << endl;
    }else if(a == b && b == c)
    {
        cout << "TRIANGULO EQUILATERO" << endl;
    }

    return 0;

}
