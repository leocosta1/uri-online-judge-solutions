#include <iostream>
using namespace std;

int main() {
    int t1, t2, t3, t4;
    cin >> t1 >> t2 >> t3 >> t4;

    int total = (t1 + t2 + t3 + t4) - 3;
    printf("%d\n", total);

    return 0;
}