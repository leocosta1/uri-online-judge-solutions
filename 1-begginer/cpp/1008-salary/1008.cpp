#include <iostream>
using namespace std;

int main() {
    int number, workTime;
    double moneyHour;

    cin >> number;
    cin >> workTime;
    cin >> moneyHour;

    double salary = workTime * moneyHour;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salary);

    return 0;
}