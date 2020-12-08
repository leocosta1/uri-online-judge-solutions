#include <iostream>
using namespace std;

int main() {
    int x;
    double y;

    cin >> x;
    cin >> y;

    printf("%.3lf km/l\n", (x / y));

    return 0;
}