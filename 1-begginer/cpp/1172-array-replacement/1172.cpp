#include <iostream>
using namespace std;

int main() {
    int x[10];

    for(int i = 0; i < 10; i++) {
        cin >> x[i];

        if(x[i] < 1) {
            x[i] = 1;
        }
    }

    for(int i = 0; i < 10; i++) {
        printf("X[%d] = %d\n", i, x[i]);
    }

    return 0;
}