#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n != 0) {
        // Receber o valor máximo
        int maxNum;
        for(int i = 0, a = 1; i < n; i++, a *= 2) {
            for(int j = 0, b = a; j < n; j++, b *= 2) {
                maxNum = b;
            }
        }

        // Contar os digítos do valor máximo
        int t = 0;
        while(maxNum != 0) {
            maxNum /= 10;
            t++;
        }

        // Escrever a matriz
        for(int i = 0, a = 1; i < n; i++, a *= 2) {
            for(int j = 0, b = a; j < n; j++, b *= 2) {
                printf("%*d", t, b);

                if(j == n - 1) printf("\n");
                else printf(" ");
            }
        }
        printf("\n");

        cin >> n;
    }

    return 0;
}