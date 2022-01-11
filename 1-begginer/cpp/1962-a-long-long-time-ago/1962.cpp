#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int t;
        cin >> t;

        int cont = 0;
        if(t < 2015) {
            cont = 2015 - t;
            printf("%d D.C.\n", cont);
        }
        else {
            cont = t - 2015 + 1;
            printf("%d A.C.\n", cont);
        }
    }

    return 0;
}