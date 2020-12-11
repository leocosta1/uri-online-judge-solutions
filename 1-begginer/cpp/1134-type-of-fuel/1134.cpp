#include <iostream>
using namespace std;

int main() {
    int qtdeA = 0, qtdeG = 0, qtdeD = 0;
    bool sair = false;

    while(sair == false) {
        int x;
        cin >> x;

        switch(x) {
            case 1:
                qtdeA++;
                break;

            case 2:
                qtdeG++;
                break;

            case 3:
                qtdeD++;
                break;

            case 4:
                sair = true;
                break;
        }
    }

    cout << "MUITO OBRIGADO\n";
    printf("Alcool: %d\n", qtdeA);
    printf("Gasolina: %d\n", qtdeG);
    printf("Diesel: %d\n", qtdeD);

    return 0;
}