#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, y, cont = 0, sum = 0;
        cin >> x >> y;

        for(int j = x; cont < y; j++) {
            if(j % 2 != 0) {
                sum += j;
                cont++;
            }
        }

        cout << sum << endl;
    }

    return 0;
}