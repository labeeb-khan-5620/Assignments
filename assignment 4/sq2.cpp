#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of integers: ";
    cin >> N;

    vector<int> numbers;
    numbers.resize(N); 

    cout << "Enter " << N << " integers:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    cout << "You entered: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
