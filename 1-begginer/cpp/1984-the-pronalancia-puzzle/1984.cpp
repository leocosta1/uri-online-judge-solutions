#include <iostream>
using namespace std;

int main() {
    string n;
    cin >> n;

    string nn = "";
    for(int i = n.length() - 1; i >= 0; i--) {
        nn += n[i];
    }

    cout << nn << endl;

    return 0;
}