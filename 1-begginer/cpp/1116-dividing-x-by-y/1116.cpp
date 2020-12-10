#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        if(y != 0) {
            printf("%.1lf\n", ((double)x / y));
        }
        else {
            cout << "divisao impossivel\n";
        }
    }

    return 0;
}