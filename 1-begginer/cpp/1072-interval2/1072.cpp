#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int num[n], in = 0, out = 0;
    for(int i = 0; i < n; i++) {
        cin >> num[i];

        if(num[i] >= 10 && num[i] <= 20) {
            in++;
        }
        else {
            out++;
        }
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}