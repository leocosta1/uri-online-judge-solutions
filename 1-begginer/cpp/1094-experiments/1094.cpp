#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0, rabbits = 0, frogs = 0, rats = 0;

    for(int i = 0; i < n; i++) {
        int amount;
        char type;
        cin >> amount >> type;

        total += amount;

        if(tolower(type) == 'c') {
            rabbits += amount;
        }
        else if(tolower(type) == 'r') {
            rats += amount;
        }
        else if(tolower(type) == 's') {
            frogs += amount;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbits);
    printf("Total de ratos: %d\n", rats);
    printf("Total de sapos: %d\n", frogs);
    printf("Percentual de coelhos: %.2lf %%\n", (rabbits * 100.0 / total));
    printf("Percentual de ratos: %.2lf %%\n", (rats * 100.0 / total));
    printf("Percentual de sapos: %.2lf %%\n", (frogs * 100.0 / total));

    return 0;
}