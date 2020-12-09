#include <iostream>
using namespace std;

int main() {
    int start, end;
    cin >> start >> end;

    if(start == end) {
        cout << "O JOGO DUROU 24 HORA(S)\n";
    }
    else if(start < end) {
        printf("O JOGO DUROU %d HORA(S)\n", (end - start));
    }
    else {
        printf("O JOGO DUROU %d HORA(S)\n", (24 - start + end));
    }

    return 0;
}