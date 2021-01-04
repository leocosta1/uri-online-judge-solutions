#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;

        double fib[n];
        fib[0] = 0;
        fib[1] = 1;

        for(int i = 2; i <= n; i++) {
            fib[i] = fib[i - 1] + fib[i - 2];
        }

        printf("Fib(%d) = %.0lf\n", n, fib[n]);
    }

    return 0;
}