#include <iostream>
using namespace std;

int main() {
    int qt;
    cin >> qt;

    for(int i = 0; i < qt; i++) {
        string p1, c1, p2, c2;
        cin >> p1 >> c1 >> p2 >> c2;

        int n1, n2;
        cin >> n1 >> n2;

        if(((n1 + n2) % 2 == 0)) {
            if(c1 == "PAR")
                cout << p1 << "\n";
            else
                cout << p2 << "\n";
        }
        else {
            if(c1 == "IMPAR")
                cout << p1 << "\n";
            else
                cout << p2 << "\n";
        }
    }

    return 0;
}