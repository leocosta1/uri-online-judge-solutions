#include <iostream>
using namespace std;

int main() {
    int n;
    int a[3] = {3600, 60, 1};
    int time[3] = {0};
    cin >> n;

    for(int i=0; i<3; i++) {
        time[i] = n / a[i];
        n -= time[i] * a[i];
    }

    printf("%i:%i:%i\n", time[0], time[1], time[2]);

    return 0;
}