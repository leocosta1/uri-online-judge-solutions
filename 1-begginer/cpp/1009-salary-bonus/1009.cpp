#include <iostream>
using namespace std;

int main() {
    string name;
    double fixedSalary, monthSales;

    cin >> name;
    cin >> fixedSalary;
    cin >> monthSales;

    double finalSalary = fixedSalary + (monthSales * 0.15);

    printf("TOTAL = R$ %.2lf\n", finalSalary);

    return 0;
}