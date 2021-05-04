#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n != 0) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                int x = i;

                if(j < x) x = j;
                if(n - i + 1 < x) x = n - i + 1;
                if(n - j + 1 < x) x = n - j + 1;

                printf("%3d", x);
                if(j < n)
                    printf(" ");
                else
                    printf("\n");
            }
        }

        printf("\n");
        cin >> n;
    }

    return 0;
}