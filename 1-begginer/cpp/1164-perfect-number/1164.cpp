#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        int sum = 0;
        for(int j = 1; j < x; j++) {
            if(x % j == 0) {
                sum += j;
            }
        }

        if(sum == x) {
            printf("%d eh perfeito\n", x);
        }
        else {
            printf("%d nao eh perfeito\n", x);
        }
    }

    return 0;
}