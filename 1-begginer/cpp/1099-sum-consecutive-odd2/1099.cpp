#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x, y, sum = 0;
        cin >> x >> y;

        for(int j = min(x, y) + 1; j < max(x, y); j++) {
            if(j % 2 != 0) {
                sum += j;
            }
        }
        cout << sum << endl;
    }

    return 0;
}