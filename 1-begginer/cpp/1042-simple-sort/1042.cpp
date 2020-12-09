#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int nums[] = {a, b, c};
    int n = sizeof(nums) / sizeof(nums[0]);
    sort(nums, nums + n);

    printf("%d\n%d\n%d\n", nums[0], nums[1], nums[2]);
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}