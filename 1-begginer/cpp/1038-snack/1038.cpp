#include <iostream>
using namespace std;

int main() {
    int x, y;
    double total;
    cin >> x >> y;

    switch(x) {
        case 1:
            total = y * 4;
            break;

        case 2:
            total = y * 4.5;
            break;

        case 3:
            total = y * 5;
            break;

        case 4:
            total = y * 2;
            break;

        case 5:
            total = y * 1.5;
            break;
    }

    printf("Total: R$ %.2lf\n", total);

    return 0;
}