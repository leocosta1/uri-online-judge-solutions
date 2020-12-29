#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int fib[n];    // Declare the array based on user input
    fib[0] = 0;    // Initial numbers (0, 1)
    fib[1] = 1;

    for(int i = 0; i < n; i++) {
        cout << fib[i];     // Shows the current sequence number
        if(i < n - 1)       // Prints space if isn't the last number
            cout << " ";    // Otherwise prints new line
        else
            cout << endl;

        // Store the next value, only if possible (do not exceed the array limit)
        if(i + 2 < n) {
            fib[i + 2] = fib[i] + fib[i + 1];
        }
    }

    return 0;
}