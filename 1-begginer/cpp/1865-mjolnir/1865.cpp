#include <iostream>
using namespace std;

int main() {
    int c;
    cin >> c;

    for(int i = 0; i < c; i++) {
        string s;
        int n;
        cin >> s >> n;

        if(s == "Thor") {
            printf("Y\n");
        }
        else {
            printf("N\n");
        }
    }

    return 0;
}