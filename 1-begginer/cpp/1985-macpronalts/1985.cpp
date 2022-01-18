#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;

    string p[n];
    int q[n];

    map<string, double> products = {
        {"1001", 1.50},
        {"1002", 2.50},
        {"1003", 3.50},
        {"1004", 4.50},
        {"1005", 5.50},
    };

    double a = 0;

    for(int i = 0; i < n; i++) {
        cin >> p[i] >> q[i];

        a += products[p[i]] * q[i];
    }

    printf("%.2lf\n", a);

    return 0;
}