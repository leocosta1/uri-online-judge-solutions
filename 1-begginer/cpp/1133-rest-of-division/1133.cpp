#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x;
    cin >> y;

    for(int i = min(x, y) + 1; i < max(x, y); i++) {
        if(i % 5 == 2 || i % 5 == 3) {
            cout << i << endl;
        }
    }

    return 0;
}