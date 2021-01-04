#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x[n], num, pos;

    for(int i = 0; i < n; i++) {
        cin >> x[i];

        if(i == 0) {
            num = x[i];
        }
        else {
            if(x[i] < num) {
                num = x[i];
                pos = i;
            }
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", num, pos);

    return 0;
}