#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string p1, p2, res;

    for(int i = 0; i < n; i++) {
        cin >> p1;
        cin >> p2;

        if(p1 == "ataque" && p2 == "ataque") {
            res = "Aniquilacao mutua";
        }
        else if(p1 == "papel" && p2 == "papel") {
            res = "Ambos venceram";
        }
        else if(p1 == "pedra" && p2 == "pedra") {
            res = "Sem ganhador";
        }
        else if((p1 == "ataque" && p2 == "pedra" || p2 == "papel") || (p1 == "pedra" && p2 == "papel")) {
            res = "Jogador 1 venceu";
        }
        else if((p1 == "pedra" && p2 == "ataque") || (p1 == "papel" && p2 == "ataque" || p2 == "pedra")) {
            res = "Jogador 2 venceu";
        }

        cout << res << endl;
    }

    return 0;
}