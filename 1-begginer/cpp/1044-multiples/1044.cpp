#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if(max(a, b) % min(a, b) == 0) {
        cout << "Sao Multiplos\n";
    }
    else {
        cout << "Nao sao Multiplos\n";
    }

    return 0;
}