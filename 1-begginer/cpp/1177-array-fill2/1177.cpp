#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int n[1000], aux = 0;
    for(int i = 0; i < 1000; i++) {
        n[i] = aux;

        if(aux < t - 1) {
            aux++;
        }
        else {
            aux = 0;
        }
    }

    for(int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}