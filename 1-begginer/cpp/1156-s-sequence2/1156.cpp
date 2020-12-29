#include <iostream>
using namespace std;

int main() {
    double s = 0;

    for(double i = 1.0, j = 1.0; i <= 39.0; i += 2.0, j *= 2.0) {
        s += i / j;
    }

    printf("%.2lf\n", s);

    return 0;
}