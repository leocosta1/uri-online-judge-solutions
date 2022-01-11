#include <iostream>
using namespace std;

int main() {
    double a, b;
    cin >> a >> b;

    double p = (((b - a) * 100) / a);
    printf("%.2lf%%\n", p);

    return 0;
}