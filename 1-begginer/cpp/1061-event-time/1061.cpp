#include <iostream>
using namespace std;

int main() {
    int sday, shour, smin, ssec;    // Data de início (start)
    int eday, ehour, emin, esec;    // Data de término (end)

    scanf("Dia %d", &sday);
    scanf("%d : %d : %d\n", &shour, &smin, &ssec);
    scanf("Dia %d", &eday);
    scanf("%d : %d : %d", &ehour, &emin, &esec);

    // Converter tempo inicial e final em segundos
    int stotal = (sday * 24 * 60 * 60) + (shour * 60 * 60) + (smin * 60) + ssec;
    int etotal = (eday * 24 * 60 * 60) + (ehour * 60 * 60) + (emin * 60) + esec;

    int days = (etotal - stotal) / 24 / 60 / 60;
    int hours = (etotal - stotal - (days * 24 * 60 * 60)) / 60 / 60;
    int minutes = (etotal - stotal - (days * 24 * 60 * 60) - (hours * 60 * 60)) / 60;
    int seconds = (etotal - stotal - (days * 24 * 60 * 60) - (hours * 60 * 60) - (minutes * 60));

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hours);
    printf("%d minuto(s)\n", minutes);
    printf("%d segundo(s)\n", seconds);

    return 0;
}