#include <iostream>
using namespace std;

int main() {
    int x = 1, n;

    while(cin >> n) {
        int q = 1;
        for(int i = 1; i <= n; i++) {
            q += i;
        }

        if(n < 1) {
            printf("Caso %d: %d numero\n", x, q);
        }
        else {
            printf("Caso %d: %d numeros\n", x, q);
        }

        printf("0");
        for(int i = 0; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                printf(" %d", i);
            }
        }
        printf("\n\n");

        x++;
    }

    return 0;
}