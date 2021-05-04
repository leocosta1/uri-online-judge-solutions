#include <iostream>
#include <algorithm>
using namespace std;

void winner(int x, int y) {
    if(x == 0) {
        printf("Caso #%d: Bazinga!\n", y);
    }
    else {
        printf("Caso #%d: Raj trapaceou!\n", y);
    }
}

int main() {
    int t;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        string a, b;
        cin >> a >> b;

        // Converter as string para lowecase (evitar erros de comparação)
        for_each(a.begin(), a.end(), [](char& c) {
            c = tolower(c);
        });
        for_each(b.begin(), b.end(), [](char& c) {
            c = tolower(c);
        });

        if(a == b) {
            printf("Caso #%d: De novo!\n", i);
        }
        else if(a == "pedra") {
            if(b == "tesoura" || b == "lagarto") {
                winner(0, i);
            }
            else {
                winner(1, i);
            }
        }
        else if(a == "papel") {
            if(b == "pedra" || b == "spock") {
                winner(0, i);
            }
            else {
                winner(1, i);
            }
        }
        else if(a == "tesoura") {
            if(b == "papel" || b == "lagarto") {
                winner(0, i);
            }
            else {
                winner(1, i);
            }
        }
        else if(a == "lagarto") {
            if(b == "papel" || b == "spock") {
                winner(0, i);
            }
            else {
                winner(1, i);
            }
        }
        else if(a == "spock") {
            if(b == "pedra" || b == "tesoura") {
                winner(0, i);
            }
            else {
                winner(1, i);
            }
        }
    }

    return 0;
}
