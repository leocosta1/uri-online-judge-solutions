#include <iostream>
using namespace std;

int main() {
    int n;
    int a[3] = {365, 30, 1};
    int age[3] = {0};
    cin >> n;

    for(int i = 0; i < 3; i++) {
        age[i] = n / a[i];
        n -= age[i] * a[i];
    }

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", age[0], age[1], age[2]);

    return 0;
}