#include <iostream>
using namespace std;

int main() {
    int h, m;

    while(scanf("%d:%d", &h, &m) != EOF) {
        int a = (h * 60 + m) + 60;
        int b = 8 * 60;
        int c = (a >= b) ? a - b : 0;

        printf("Atraso maximo: %d\n", c);
    }

    return 0;
}