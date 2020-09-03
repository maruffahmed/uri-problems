#include <iostream>
using namespace std;

int main()
{

    string g_parent, parent, child, result;
    cin >> g_parent >> parent >> child;

    if(g_parent == "vertebrado"){
        if(parent == "ave"){
            if(child == "carnivoro")
                result =  "aguia";
            else if(child == "onivoro")
                result =  "pomba";
        }
        else if(parent == "mamifero"){
            if(child == "onivoro")
                result =  "homem";
            else if(child == "herbivro")
                result =  "vaca";
        }
    }
    else if(g_parent == "invertebrado"){
        if(parent == "inseto"){
            if(child == "hematofago")
                result =  "pulga";
            else if(child == "herbivoro")
                result =  "lagarta";
        }
        else if(parent == "anelideo"){
            if(child == "hematofago")
                result =  "sanguessuga";
            else if(child == "onivoro")
                result =  "minhoca";
        }
    }
    cout << result << endl;
    return 0;
}
