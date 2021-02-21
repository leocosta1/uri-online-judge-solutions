#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int r1, r2;
        scanf("%d %d", &r1, &r2);

        int conduit = r1 + r2;
        printf("%d\n", conduit);
    }

    return 0;
}