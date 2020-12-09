#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    // Converter tempo inicial e final para minutos
    int initTotal = (a * 60) + b;
    int finalTotal = (c * 60) + d;

    // Receber +24h caso necessário
    if((a == c && b >= d) || (a > c)) {
        finalTotal += 24 * 60;
    }

    int hours = (finalTotal - initTotal) / 60;
    int minutes = (finalTotal - initTotal - (hours * 60));

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

    return 0;
}