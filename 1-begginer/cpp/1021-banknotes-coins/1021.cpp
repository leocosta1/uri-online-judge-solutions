#include <iostream>
using namespace std;

int main() {
    double valor;                       // Entrada do Usuário
    int a[] = {100, 50, 20, 10, 5, 2};  // Array Notas
    int b[] = {50, 25, 10, 5, 1};       // Array Moedas
    int notas, moedas, c;               // Qtde. Notas e Moedas + Variável Auxiliar

    // Entrada do valor | Converter para inteiro
    cin >> valor;
    c = valor * 100;
    c = c / 100;

    // Operação das Notas
    printf("NOTAS:\n");
    for(int i = 0; i < 6; i++) {
        notas = c / a[i];
        c -= notas * a[i];
        printf("%d nota(s) de R$ %d.00\n", notas, a[i]);

        // Moeda de R$1.00
        if(i == 5) {
            notas = c / 1;
        }
    }

    // Converter novamente p/ inteiro | Usar apenas os decimais
    c = valor * 100;
    c = c % 100;

    // Operação das Moedas
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", notas);

    for(int i = 0; i < 5; i++) {
        moedas = c / b[i];
        c -= moedas * b[i];

        // Formatação especial para 5 e 1 centavo(s)
        if(i < 3) {
            printf("%d moeda(s) de R$ 0.%d\n", moedas, b[i]);
        }
        else {
            printf("%d moeda(s) de R$ 0.0%d\n", moedas, b[i]);
        }
    }

    return 0;
}