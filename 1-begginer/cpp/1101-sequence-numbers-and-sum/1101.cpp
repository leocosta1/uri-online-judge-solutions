#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    while(m > 0 && n > 0) {
        int sum = 0;

        for(int i = min(m, n); i <= max(m, n); i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);

        cin >> m >> n;
    }

    return 0;
}