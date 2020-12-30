#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    while(x != 0) {
        int cont = 0, sum = 0;

        for(int i = x; cont < 5; i++) {
            if(i % 2 == 0) {
                sum += i;
                cont++;
            }
        }

        cout << sum << endl;
        cin >> x;
    }

    return 0;
}