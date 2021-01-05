#include <iostream>
using namespace std;

int main() {
    int l;
    cin >> l;

    char t;
    cin >> t;

    double m[12][12];
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> m[i][j];
        }
    }

    double total = 0;
    for(int i = 0; i < 12; i++) {
        total += m[i][l];
    }

    if(toupper(t) == 'M') {
        total = total / 12;
    }

    printf("%.1lf\n", total);

    return 0;
}