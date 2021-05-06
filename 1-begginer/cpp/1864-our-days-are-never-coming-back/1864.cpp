#include <iostream>
using namespace std;

int main() {
    string str = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    int n;
    cin >> n;

    if(0 <= n && n <= 34) {
        for(int i = 0; i < n; i++) {
            cout << str[i];
        }

        cout << "\n";
    }

    return 0;
}