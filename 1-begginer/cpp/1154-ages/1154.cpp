#include <iostream>
using namespace std;

int main() {
    int ages;
    cin >> ages;

    int sum = 0, cont = 0;

    while(ages > 0) {
        sum += ages;
        cont++;

        cin >> ages;
    }

    printf("%.2lf\n", ((double)sum / cont));

    return 0;
}