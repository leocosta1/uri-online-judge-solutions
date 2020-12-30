#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        int cont = 0;
        for(int j = 1; j <= x; j++) {
            if(x % j == 0) {
                cont++;
            }
        }

        if(cont > 2) {
            printf("%d nao eh primo\n", x);
        }
        else {
            printf("%d eh primo\n", x);
        }
    }

    return 0;
}