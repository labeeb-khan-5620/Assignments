#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    
    vector<int> numbers = {10, 20, 30, 40, 50};

  
    cout << "Using traditional for loop: ";
    for (size_t i = 0; i < numbers.size(); i++)
     {
        cout << numbers[i] << " ";
    }
    cout << endl;

    
    cout << "Using range-based for loop: ";
    for (int num : numbers)
     {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
