#include <iostream>
#include <vector>
#include <string>
using namespace std;


int countHorizontal(const vector<vector<char>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    for (int i = 0; i < rows; i++) {
        string word = "";
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] != '#') {
                word += grid[i][j];
            } else {
                if (word.length() >= 3)
                    count++;
                word = "";
            }
        }
        if (word.length() >= 3)
            count++;
    }
    return count;
}


int countVertical(const vector<vector<char>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    for (int j = 0; j < cols; j++) {
        string word = "";
        for (int i = 0; i < rows; i++) {
            if (grid[i][j] != '#') {
                word += grid[i][j];
            } else {
                if (word.length() >= 3)
                    count++;
                word = "";
            }
        }
        if (word.length() >= 3)
            count++;
    }
    return count;
}

string findLongest(const vector<vector<char>>& grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    string longest = "";

    for (int i = 0; i < rows; i++) {
        string word = "";
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] != '#') {
                word += grid[i][j];
            } else {
                if (word.length() > longest.length())
                    longest = word;
                word = "";
            }
        }
        if (word.length() > longest.length())
            longest = word;
    }

    for (int j = 0; j < cols; j++) {
        string word = "";
        for (int i = 0; i < rows; i++) {
            if (grid[i][j] != '#') {
                word += grid[i][j];
            } else {
                if (word.length() > longest.length())
                    longest = word;
                word = "";
            }
        }
        if (word.length() > longest.length())
            longest = word;
    }

    return (longest.length() >= 3) ? longest : "";
}

int main() {
    int rows, cols;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    vector<vector<char>> grid(rows, vector<char>(cols));

    cout << "Enter the grid character by character:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];  
        }
    }

    cout << "Horizontal words: " << countHorizontal(grid) << endl;
    cout << "Vertical words: " << countVertical(grid) << endl;
    cout << "Longest word: " << findLongest(grid) << endl;

    return 0;
}
