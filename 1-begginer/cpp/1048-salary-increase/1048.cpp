#include <iostream>
using namespace std;

int main() {
    double salary;
    cin >> salary;

    if(salary > 0 && salary <= 400) {
        printf("Novo salario: %.2lf\n", salary + (salary / 100 * 15));
        printf("Reajuste ganho: %.2lf\n", salary / 100 * 15);
        printf("Em percentual: 15 %\n");
    }
    else if(salary > 400 && salary <= 800) {
        printf("Novo salario: %.2lf\n", salary + (salary / 100 * 12));
        printf("Reajuste ganho: %.2lf\n", salary / 100 * 12);
        printf("Em percentual: 12 %\n");
    }
    else if(salary > 800 && salary <= 1200) {
        printf("Novo salario: %.2lf\n", salary + (salary / 100 * 10));
        printf("Reajuste ganho: %.2lf\n", salary / 100 * 10);
        printf("Em percentual: 10 %\n");
    }
    else if(salary > 1200 && salary <= 2000) {
        printf("Novo salario: %.2lf\n", salary + (salary / 100 * 7));
        printf("Reajuste ganho: %.2lf\n", salary / 100 * 7);
        printf("Em percentual: 7 %\n");
    }
    else if(salary > 2000) {
        printf("Novo salario: %.2lf\n", salary + (salary / 100 * 4));
        printf("Reajuste ganho: %.2lf\n", salary / 100 * 4);
        printf("Em percentual: 4 %\n");
    }

    return 0;
}