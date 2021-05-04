#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while(n != 0) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1, a = i; j <= n; j++) {

                if(j == i) {
                    a = 1;
                }

                printf("%3d", a);
                if(j == n) printf("\n");
                else printf(" ");

                if(j >= i) {
                    a++;
                }
                else {
                    a--;
                }
            }
        }
        printf("\n");

        cin >> n;
    }

    return 0;
}