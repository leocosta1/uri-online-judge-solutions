#include <iostream>
using namespace std;

int main() {
    char o;
    cin >> o;

    double m[12][12];
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> m[i][j];
        }
    }

    double total = 0, cont = 0;
    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            if(j < (11 - i)) {
                total += m[i][j];
                cont++;
            }
        }
    }

    if(toupper(o) == 'M') {
        total = total / cont;
    }

    printf("%.1lf\n", total);

    return 0;
}