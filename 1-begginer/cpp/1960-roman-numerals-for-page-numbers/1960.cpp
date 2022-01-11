#include <iostream>
using namespace std;

string roman_number(int num) {
    int nums[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    string letters[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    string finalNum = "";
    int i = 0;

    while(num) {
        while(num >= nums[i]) {
            finalNum += letters[i];
            num -= nums[i];
        }
        i++;
    }

    return finalNum;
}

int main() {
    int n;
    cin >> n;

    cout << roman_number(n) << "\n";

    return 0;
}