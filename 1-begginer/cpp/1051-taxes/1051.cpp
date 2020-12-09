#include <iostream>
using namespace std;

int main() {
    double salary;
    cin >> salary;

    if(salary >= 0 && salary <= 2000.00) {
        cout << "Isento\n";
    }
    else if(salary > 2000.00 && salary <= 3000.00) {
        printf("R$ %.2lf\n", ((salary - 2000.00) * 0.08));
    }
    else if(salary > 3000.00 && salary <= 4500.00) {
        printf("R$ %.2lf\n", (((salary - 3000.00) * 0.18) + (1000.00 * 0.08)));
    }
    else {
        printf("R$ %.2lf\n", (((salary - 4500.00) * 0.28) + (1500.00 * 0.18) + (1000.00 * 0.08)));
    }

    return 0;
}