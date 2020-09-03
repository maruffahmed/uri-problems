#include <iostream>
using namespace std;

string msg(string team){
    return team + " venceu mais\n";
}

int main(){

    int select,
        totalGrenais = 0,
        inter,
        gremio,
        inter_total = 0,
        gremio_total = 0,
        draw = 0;

    do{
        cin >> inter >> gremio;
        totalGrenais++;
        if(inter > gremio)
            inter_total++;
        else if(inter == gremio)
            draw++;
        else
            gremio_total++;
        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> select;
        if(select != 2)
            continue;
        break;
    }while(true);

    string final_msg;
    if (inter_total != gremio_total)
        final_msg = inter_total > gremio_total ? msg("Inter") : msg("Gremio");
    else
        final_msg = "Não houve vencedor\n";

    cout << totalGrenais << " grenais\n";
    cout << "Inter:" << inter_total << endl;
    cout << "Gremio:" << gremio_total << endl;
    cout << "Empates:" << draw << endl;
    cout << final_msg;

    return 0;
}
