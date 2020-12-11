#include <iostream>
using namespace std;

int main() {
    int n, cont = 1;
    cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = cont; j < (cont + 3); j++) {
            cout << j << " ";
        }
        cout << "PUM\n";
        cont += 4;
    }

    return 0;
}