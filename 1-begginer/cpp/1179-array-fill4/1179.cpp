#include <iostream>
using namespace std;

int main() {
    int num[15], par[5], impar[5];
    int j = 0, g = 0;

    for(int i = 0; i < 15; i++) {
        cin >> num[i];

        if(num[i] % 2 == 0) {
            par[j] = num[i];
            j++;
        }
        else {
            impar[g] = num[i];
            g++;
        }

        if(j == 5) {
            for(int z = 0; z < 5; z++) {
                printf("par[%d] = %d\n", z, par[z]);
            }
            j = 0;
        }
        if(g == 5) {
            for(int z = 0; z < 5; z++) {
                printf("impar[%d] = %d\n", z, impar[z]);
            }
            g = 0;
        }
    }

    for(int i = 0; i < g; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for(int i = 0; i < j; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}