#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    double average = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / (2 + 3 + 4 + 1);

    printf("Media: %.1lf\n", average);

    if(average >= 7) {
        cout << "Aluno aprovado.\n";
    }
    else if(average < 5) {
        cout << "Aluno reprovado.\n";
    }
    else {
        cout << "Aluno em exame.\n";
        double n5;
        cin >> n5;

        printf("Nota do exame: %.1lf\n", n5);

        average = (average + n5) / 2;
        if(average >= 5) {
            cout << "Aluno aprovado.\n";
        }
        else {
            cout << "Aluno reprovado.\n";
        }

        printf("Media final: %.1lf\n", average);
    }

    return 0;
}