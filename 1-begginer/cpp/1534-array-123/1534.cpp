#include <iostream>
using namespace std;

int main() {
    int n;

    while(cin >> n) {
        int a[n][n];

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {

                if(j == n - i - 1) {
                    a[i][j] = 2;
                }
                else if(i == j) {
                    a[i][j] = 1;
                }
                else {
                    a[i][j] = 3;
                }

                printf("%d", a[i][j]);
                if(j == (n - 1)) printf("\n");
            }
        }
    }

    return 0;
}