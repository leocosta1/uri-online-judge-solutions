#include <iostream>
using namespace std;

int main() {
    int n;

    while(cin >> n) {
        int a[n][n];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                if(n % 2 != 0 && j == n / 2 && i == n / 2) {
                    a[i][j] = 4;
                }
                else if((i >= n / 3 && i < n - n / 3) && (j >= n / 3 && j < n - n / 3)) {
                    a[i][j] = 1;
                }
                else if(j == n - i - 1) {
                    a[i][j] = 3;
                }
                else if(i == j) {
                    a[i][j] = 2;
                }
                else {
                    a[i][j] = 0;
                }

                printf("%d", a[i][j]);
                if(j == n - 1) printf("\n");
            }
        }
        printf("\n");

    }

    return 0;
}