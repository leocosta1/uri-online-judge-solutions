#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a;
    cin >> b;

    double media = ((a * 3.5) + (b * 7.5)) / (3.5 + 7.5);

    printf("MEDIA = %.5lf\n", media);

    return 0;
}