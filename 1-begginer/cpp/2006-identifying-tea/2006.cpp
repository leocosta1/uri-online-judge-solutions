#include <iostream>
using namespace std;

int main() {
    int t, n = 0;
    cin >> t;

    int c[5];
    for(int i = 0; i < 5; i++) {
        cin >> c[i];

        if(t == c[i]) n++;
    }

    printf("%d\n", n);

    return 0;
}