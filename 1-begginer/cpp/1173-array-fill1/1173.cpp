#include <iostream>
using namespace std;

int main() {
    int v;
    cin >> v;

    int n[10];
    for(int i = 0; i < 10; i++) {
        n[i] = v;
        printf("N[%d] = %d\n", i, n[i]);

        v *= 2;
    }

    return 0;
}