#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int student[n];
    double note[n];

    double gn = 0;
    int sn = 0;

    for(int i = 0; i < n; i++) {
        cin >> student[i] >> note[i];

        if(note[i] > gn) {
            gn = note[i];
            sn = student[i];
        }
    }

    if(gn < 8) {
        cout << "Minimum note not reached\n";
    }
    else {
        printf("%d\n", sn);
    }

    return 0;
}