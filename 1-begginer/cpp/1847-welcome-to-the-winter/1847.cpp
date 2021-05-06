#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b) {
        if(b <= c) {
            printf(":)\n");
        }

        if((b > c) && ((a - b) > (b - c))) {
            printf(":)\n");
        }
        else if((b > c) && ((a - b) <= (b - c))) {
            printf(":(\n");
        }
    }
    else if(a < b) {
        if(b >= c) {
            printf(":(\n");
        }

        if((b < c) && ((c - b) < (b - a))) {
            printf(":(\n");
        }
        else if((b < c) && ((c - b) >= (b - a))) {
            printf(":)\n");
        }
    }
    else {
        if(b < c) {
            printf(":)\n");
        }
        else {
            printf(":(\n");
        }
    }

    return 0;
}