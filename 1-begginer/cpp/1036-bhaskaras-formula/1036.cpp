#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double delta = pow(b, 2) - 4 * a * c;

    if(a == 0 || delta < 0) {
        cout << "Impossivel calcular\n";
    }
    else {
        double root1 = ((-b) + sqrt(delta)) / (2 * a);
        double root2 = ((-b) - sqrt(delta)) / (2 * a);

        printf("R1 = %.5lf\nR2 = %.5lf\n", root1, root2);
    }

    return 0;
}