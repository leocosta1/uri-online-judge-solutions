#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double v, d;

    while(cin >> v && cin >> d) {
        const double PI = 3.14;
        double r = d / 2;

        double a = PI * pow(r, 2);
        double h = v / a;

        printf("ALTURA = %.2lf\n", h);
        printf("AREA = %.2lf\n", a);
    }

    return 0;
}