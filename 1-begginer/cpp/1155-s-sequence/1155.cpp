#include <iostream>
using namespace std;

int main() {
    double s = 0;

    for(double i = 1.0; i <= 100.0; i++) {
        s += 1 / i;
    }

    printf("%.2lf\n", s);

    return 0;
}