#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cout << "Enter the number of elements: ";
    cin >> N;

    vector<int> numbers(N);
    cout << "Enter " << N << " elements: ";
    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    int target;
    cout << "Enter the target number: ";
    cin >> target;

    int count = 0;
    for (int num : numbers) {
        if (num == target)
            count++;
    }

    cout << "The number " << target << " appears " << count << " times in the vector." << endl;

    return 0;
}
