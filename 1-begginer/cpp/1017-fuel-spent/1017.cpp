#include <iostream>
using namespace std;

int main() {
    int spentTime, averageSpeed;
    cin >> spentTime;
    cin >> averageSpeed;

    printf("%.3lf\n", (averageSpeed * spentTime / 12.00));

    return 0;
}