#include <iostream>
using namespace std;

int main() {
    // Número de estrelas
    unsigned n;
    cin >> n;

    unsigned x[n];                // Número de ovelhas em cada estrela
    int a[n];                     // Estrelas atacadas (0 -> não atacada | 1 -> atacada)
    long long unsigned to = 0;    // Soma total de ovelhas em todas as estrelas
    long long unsigned ta = 0;    // Soma total de estrelas atacadas

    for(int i = 0; i < n; i++) {
        cin >> x[i];
        to += x[i];

        a[i] = 0;
    }

    int i = 0;
    while(i >= 0 && i < n) {
        int l = x[i] % 2;    // Lado que ele irá seguir (par/ímpar)

        if(x[i] > 0) {
            x[i] -= 1;
            to -= 1;

            a[i] = 1;
        }

        if(l)
            i++;
        else
            i--;
    }

    for(int i = 0; i < n; i++) {
        // Se a estrela foi atacada (a[i] == 1), incrementar total
        if(a[i])
            ta++;
    }

    printf("%llu %llu\n", ta, to);

    return 0;
}