#include <iostream>
using namespace std;

int main() {
    int s, t, f;
    cin >> s >> t >> f;

    int a = s + t + f;

    if(a >= 24) {
        a -= 24;
    }

    if(a < 0) {
        a += 24;
    }

    printf("%d\n", a);

    return 0;
}