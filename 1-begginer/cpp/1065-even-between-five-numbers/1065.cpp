#include <iostream>
using namespace std;

int main() {
    int num[5], cont = 0;

    for(int i = 0; i < 5; i++) {
        cin >> num[i];

        if(num[i] % 2 == 0) {
            cont++;
        }
    }

    printf("%d valores pares\n", cont);

    return 0;
}