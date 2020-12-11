#include <iostream>
using namespace std;

int main() {
    int x, y, sum = 0;
    cin >> x;
    cin >> y;

    for(int i = min(x, y); i <= max(x, y); i++) {
        if(i % 13 != 0) {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}