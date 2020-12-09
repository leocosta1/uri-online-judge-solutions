#include <iostream>
using namespace std;

int main() {
    int x, cont = 0;
    cin >> x;

    for(int i = x; cont < 6; i++) {
        if(i % 2 != 0) {
            cout << i << endl;
            cont++;
        }
    }

    return 0;
}