#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    // Regra de existência do triângulo
    if((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("Perimetro = %.1lf\n", (a + b + c));
    }
    else {
        printf("Area = %.1lf\n", (((a + b) * c) / 2));
    }

    return 0;
}