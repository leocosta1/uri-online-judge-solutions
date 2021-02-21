#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    while(a != 0 && b != 0 && c != 0) {
        double land = sqrt((a * b) * (100 / c));
        cout << (int)land << endl;

        scanf("%lf %lf %lf", &a, &b, &c);
    }

    return 0;
}