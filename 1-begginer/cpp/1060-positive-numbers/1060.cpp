#include <iostream>
using namespace std;

int main() {
    int cont = 0;
    double num[6];

    for(int i = 0; i < 6; i++) {
        cin >> num[i];

        if(num[i] > 0) {
            cont++;
        }
    }

    printf("%d valores positivos\n", cont);

    return 0;
}