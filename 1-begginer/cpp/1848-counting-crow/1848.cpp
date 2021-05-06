#include <iostream>
#include <cmath>
using namespace std;

int bin_to_dec(string strNum) {
    int finalNum = 0;

    for(int i = 0; i < strNum.length(); i++) {
        string subStr = strNum.substr(i, 1);

        int subNum = stoi(subStr);
        subNum *= pow(2, (strNum.length() - 1 - i));

        finalNum += subNum;
    }

    return finalNum;
}

int main() {
    string input;
    int num = 0;

    int cont = 0;                   // Contador de entradas (0 - 3 (gritos do corvo))
    while(cont < 3) {
        getline(cin, input);        // Recebendo a entrada

        if(input == "caw caw") {    // Se for igual ao grito do corvo
            printf("%d\n", num);    // Printar o número da loteria

            cont++;                 // Atualizar o contador e zerar o número atual
            num = 0;
        }
        else {
            string strNum;

            for(int i = 0; i < 3; i++) {    // Percorrendo a string de entrada (0 - 3 (olhos))
                if(input[i] == '-') {       // Adicionando 0 ou 1 de acordo com os olhos (- = olho fechado = 0 / * = olho aberto = 1);
                    strNum += "0";
                }
                else if(input[i] == '*') {
                    strNum += "1";
                }
            }

            num += bin_to_dec(strNum);      // Somando ao número atual a conversão do binário para decimal
        }
    }

    return 0;
}