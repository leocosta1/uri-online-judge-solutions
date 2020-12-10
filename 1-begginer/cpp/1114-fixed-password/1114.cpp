#include <iostream>
using namespace std;

int main() {
    int password;

    while(1) {
        cin >> password;

        if(password != 2002) {
            cout << "Senha Invalida\n";
        }
        else {
            cout << "Acesso Permitido\n";
            break;
        }
    }

    return 0;
}