#include <iostream>
using namespace std;

int main() {
    int repetir = 1;

    while(repetir == 1) {
        double n1, n2;

        cin >> n1;
        while(n1 < 0 || n1 > 10) {
            cout << "nota invalida\n";
            cin >> n1;
        }

        cin >> n2;
        while(n2 < 0 || n2 > 10) {
            cout << "nota invalida\n";
            cin >> n2;
        }

        printf("media = %.2lf\n", ((n1 + n2) / 2));

        cout << "novo calculo (1-sim 2-nao)\n";
        cin >> repetir;

        while(repetir != 1 && repetir != 2) {
            cout << "novo calculo (1-sim 2-nao)\n";
            cin >> repetir;
        }
    }

    return 0;
}