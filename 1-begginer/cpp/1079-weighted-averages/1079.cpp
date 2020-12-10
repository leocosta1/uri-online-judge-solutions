#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    double nota[3];

    for(int i = 0; i < n; i++) {
        cin >> nota[0] >> nota[1] >> nota[2];
        printf("%.1lf\n", ((nota[0] * 2 + nota[1] * 3 + nota[2] * 5) / (2 + 3 + 5)));
    }

    return 0;
}