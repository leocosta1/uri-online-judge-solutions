#include <iostream>
using namespace std;

int main() {
    int num[5];
    int pares = 0, impares = 0, positivos = 0, negativos = 0;

    for(int i = 0; i < 5; i++) {
        cin >> num[i];

        if(num[i] % 2 == 0) {
            pares++;
        }
        else {
            impares++;
        }

        if(num[i] > 0) {
            positivos++;
        }
        else if(num[i] < 0) {
            negativos++;
        }
    }

    printf("%d valor(es) par(es)\n", pares);
    printf("%d valor(es) impar(es)\n", impares);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}