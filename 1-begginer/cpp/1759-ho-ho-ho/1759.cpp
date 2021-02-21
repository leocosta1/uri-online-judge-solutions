#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {
        printf("Ho");

        if(i == n) printf("!\n");
        else printf(" ");
    }

    return 0;
}