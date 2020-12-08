#include <iostream>
using namespace std;

int main() {
    int a, b, d, e;
    double c, f;

    cin >> a >> b >> c;
    cin >> d >> e >> f;

    double total = (b * c) + (e * f);

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}