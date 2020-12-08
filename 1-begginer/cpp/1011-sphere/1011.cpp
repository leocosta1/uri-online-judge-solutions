#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double pi = 3.14159, r;
    cin >> r;

    double v = (4 / 3.0) * pi * (pow(r, 3));

    printf("VOLUME = %.3lf\n", v);

    return 0;
}