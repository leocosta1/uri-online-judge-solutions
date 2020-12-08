#include <iostream>
using namespace std;

int main() {
    int a;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};

    cin >> a;

    cout << a << endl;
    for(int i=0; i<7; i++) {
        printf("%i nota(s) de R$ %i,00\n", a / notas[i], notas[i]);
        a -= (notas[i] * (a / notas[i]));
    }

    return 0;
}