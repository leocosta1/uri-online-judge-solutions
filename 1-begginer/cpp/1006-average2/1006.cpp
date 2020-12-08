#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    double media = ((a * 2) + (b * 3) + (c * 5)) / (2 + 3 + 5);

    printf("MEDIA = %.1lf\n", media);

    return 0;
}