#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Entrada usuário
    double a, b, c;
    cin >> a >> b >> c;

    // Array para ordenar
    double sides[] = {a, b, c};
    int n = sizeof(sides) / sizeof(sides[0]);
    sort(sides, sides + n);

    // Atribuindo os valores do maior para o menor
    a = sides[2];
    b = sides[1];
    c = sides[0];

    if(a >= b + c) {
        cout << "NAO FORMA TRIANGULO\n";
    }
    else {
        if(pow(a, 2) == pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO RETANGULO\n";
        }
        if(pow(a, 2) > pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO OBTUSANGULO\n";
        }
        if(pow(a, 2) < pow(b, 2) + pow(c, 2)) {
            cout << "TRIANGULO ACUTANGULO\n";
        }
        if(a == b && b == c) {
            cout << "TRIANGULO EQUILATERO\n";
        }
        if((a == b && b != c) || (a == c && c != b) || (b == c && c != a)) {
            cout << "TRIANGULO ISOSCELES\n";
        }
    }

    return 0;
}