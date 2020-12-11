#include <iostream>
using namespace std;

int main() {
    int qtdeGrenais = 0, vitInter = 0, vitGremio = 0, empates = 0;
    int repetir = 1;

    while(repetir == 1) {
        int golInter, golGremio;
        cin >> golInter >> golGremio;

        if(golInter > golGremio) {
            vitInter++;
        }
        else if(golInter < golGremio) {
            vitGremio++;
        }
        else {
            empates++;
        }

        cout << "Novo grenal (1-sim 2-nao)\n";
        cin >> repetir;
        while(repetir != 1 && repetir != 2) {
            cout << "Novo grenal (1-sim 2-nao)\n";
            cin >> repetir;
        }

        qtdeGrenais++;
    }

    printf("%d grenais\n", qtdeGrenais);
    printf("Inter:%d\n", vitInter);
    printf("Gremio:%d\n", vitGremio);
    printf("Empates:%d\n", empates);

    if(vitInter > vitGremio) {
        cout << "Inter venceu mais\n";
    }
    else if(vitInter < vitGremio) {
        cout << "Gremio venceu mais\n";
    }
    else {
        cout << "Não houve vencedor\n";
    }

    return 0;
}