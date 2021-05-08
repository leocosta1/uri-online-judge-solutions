#include <iostream>
#include <cmath>
using namespace std;

int triang_exist(int a, int b, int c) {
    if((a + b > c) && (a + c > b) && (b + c > a)) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if(triang_exist(a, b, c) || triang_exist(a, b, d) || triang_exist(a, c, d) || triang_exist(b, c, d)) {
        printf("S\n");
    }
    else {
        printf("N\n");
    }

    return 0;
}