#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int pa, pb;
        double g1, g2;

        cin >> pa >> pb >> g1 >> g2;

        int cont = 0;
        while(pa <= pb) {
            pa += (pa * g1) / 100;
            pb += (pb * g2) / 100;
            cont++;

            if(cont > 100) {
                break;
            }
        }

        if(cont <= 100) {
            printf("%d anos.\n", cont);
        }
        else {
            printf("Mais de 1 seculo.\n");
        }
    }

    return 0;
}