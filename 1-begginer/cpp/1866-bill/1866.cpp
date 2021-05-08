#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c;

    for(int i = 0; i < c; i++) {
        int n;
        cin >> n;

        int s;
        if(n % 2 == 0) s = 0;
        else s = 1;

        printf("%d\n", s);
    }

    return 0;
}