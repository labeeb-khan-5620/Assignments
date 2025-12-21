#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of integers: ";
    cin >> N;

    vector<int> numbers(N);
    cout << "Enter " << N << " integers:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    int maxVal = numbers[0];
    int minVal = numbers[0];

    for (int i = 1; i < N; i++) {
        if (numbers[i] > maxVal) maxVal = numbers[i];
        if (numbers[i] < minVal) minVal = numbers[i];
    }

    cout << "Maximum element: " << maxVal << endl;
    cout << "Minimum element: " << minVal << endl;

    return 0;
}
