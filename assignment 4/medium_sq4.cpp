#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target, count = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> v[i];

    cout << "Enter target sum: ";
    cin >> target;

    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (v[i] + v[j] == target) count++;

    cout << "Pairs with sum " << target << ": " << count << endl;
    return 0;
}
