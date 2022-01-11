#include <iostream>
using namespace std;

int main() {
    int p, n;
    cin >> p >> n;

    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    string result;
    for(int i = 0; i < n - 1; i++) {
        if(max(a[i], a[i + 1]) - min(a[i], a[i + 1]) > p) {
            result = "GAME OVER";
            break;
        }
        else {
            result = "YOU WIN";
        }
    }

    cout << result << "\n";

    return 0;
}