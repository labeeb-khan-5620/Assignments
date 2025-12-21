#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    vector<int> numbers(N);
    cout << "Enter " << N << " elements: ";
    for (int i = 0; i < N; i++)
        cin >> numbers[i];

    vector<int> oddNumbers;
    for (int num : numbers) {
        if (num % 2 != 0)
            oddNumbers.push_back(num);
    }

    cout << "Vector after removing even numbers: ";
    for (int num : oddNumbers)
        cout << num << " ";
    cout << endl;

    return 0;
}
