#include <iostream>
using namespace std;

string to_hex(int v) {
    string letters[] = {"A", "B", "C", "D", "E", "F"};
    string v_hex = "";

    while(v >= 1) {
        if(v % 16 > 9) {
            v_hex = letters[v % 16 - 10] + v_hex;
        }
        else {
            v_hex = to_string(v % 16) + v_hex;
        }

        v /= 16;
    }

    return v_hex;
}

int main() {
    int v;
    cin >> v;

    if(v >= 1) {
        cout << to_hex(v) << "\n";
    }

    return 0;
}