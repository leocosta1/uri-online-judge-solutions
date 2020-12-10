#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num[n];

    for(int i = 0; i < n; i++) {
        cin >> num[n];

        if(num[n] == 0) {
            printf("NULL\n");
        }
        else {
            if(num[n] % 2 == 0) {
                printf("EVEN ");
            }
            else {
                printf("ODD ");
            }

            if(num[n] > 0) {
                printf("POSITIVE\n");
            }
            else {
                printf("NEGATIVE\n");
            }
        }
    }

    return 0;
}