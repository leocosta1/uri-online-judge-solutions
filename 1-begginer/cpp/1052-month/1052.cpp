#include <iostream>
using namespace std;

int main() {
    string months[] = {"January", "February", "March",
                       "April", "May", "June", "July",
                       "August", "September", "October",
                       "November", "December"};

    int a;
    cin >> a;

    cout << months[a - 1] << endl;

    return 0;
}