#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int menor, posMenor = 1;
    for(int i = 1; i <= n; i++) {
        int t;
        cin >> t;

        if(i == 1) menor = t;

        if(t < menor) {
            menor = t;
            posMenor = i;
        }
    }

    printf("%d\n", posMenor);

    return 0;
}