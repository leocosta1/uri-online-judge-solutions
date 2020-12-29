#include <iostream>
using namespace std;

int main() {
    int x, z, cont, sum = 0;
    cin >> x;
    cin >> z;

    while(z <= x) {
        cin >> z;
    }

    for(cont = 0; sum <= z; cont++) {
        sum += x;
        x++;
    }

    cout << cont << endl;

    return 0;
}