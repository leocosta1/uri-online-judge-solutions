#include <iostream>
using namespace std;

int main() {
    bool q, c, a;
    int p1, p2;

    cin >> q >> p1 >> p2 >> c >> a;

    bool r = (p1 + p2) % 2;
    string res;

    if(c && a) {
        res = "Jogador 2 ganha!";
    }
    else if(c) {
        res = "Jogador 1 ganha!";
    }
    else if(a) {
        res = "Jogador 1 ganha!";
    }
    else if((q && !r) || (!q && r)) {
        res = "Jogador 1 ganha!";
    }
    else {
        res = "Jogador 2 ganha!";
    }

    cout << res << endl;

    return 0;
}