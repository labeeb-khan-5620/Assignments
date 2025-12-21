#include <iostream>
#include <vector>
using namespace std;


void reverseVector(vector<int> &v) {
    int n = v.size();
    for (int i = 0; i < n / 2; i++) {
        int temp = v[i];
        v[i] = v[n - 1 - i];
        v[n - 1 - i] = temp;
    }
}

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    vector<int> numbers(N);
    cout << "Enter " << N << " elements: ";
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    reverseVector(numbers);

    cout << "Reversed vector: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
