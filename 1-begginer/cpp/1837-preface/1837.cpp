#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(b != 0) {
        int q, r;

        for(r = 0; r < abs(b); r++) {
            q = (a - r) / b;

            if(a == b * q + r) {
                break;
            }
        }

        printf("%d %d\n", q, r);
    }

    return 0;
}