#include <iostream>
using namespace std;

int main() {
    int l;

    while(cin >> l) {
        int v[l];

        for(int i = 0; i < l; i++) {
            scanf("%d", &v[i]);
        }

        int maxSpeed = 0;
        for(int i = 0; i < l; i++) {
            if(v[i] > maxSpeed) {
                maxSpeed = v[i];
            }
        }

        if(maxSpeed < 10) {
            printf("1\n");
        }
        else if(maxSpeed >= 10 && maxSpeed < 20) {
            printf("2\n");
        }
        else {
            printf("3\n");
        }
    }

    return 0;
}