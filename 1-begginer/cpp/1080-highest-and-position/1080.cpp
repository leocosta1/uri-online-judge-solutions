#include <iostream>
using namespace std;

int main() {
    int numbers[100];
    int x, pos;

    for(int i = 0; i < 100; i++) {
        cin >> numbers[i];

        if(i == 0) {
            x = numbers[i];
        }
        if(numbers[i] > x) {
            x = numbers[i];
            pos = i + 1;
        }
    }

    cout << x << endl
         << pos << endl;

    return 0;
}