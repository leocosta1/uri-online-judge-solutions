#include <iostream>
#include <vector>
using namespace std;

int main() {
    double num[6], average = 0;
    vector<double> positives;

    for(int i = 0; i < 6; i++) {
        cin >> num[i];

        if(num[i] > 0) {
            positives.push_back(num[i]);
        }
    }

    for(int i = 0; i < positives.size(); i++) {
        average += positives[i];
    }

    printf("%d valores positivos\n", positives.size());
    printf("%.1lf\n", (average / positives.size()));

    return 0;
}