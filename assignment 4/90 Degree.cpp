#include <iostream>
#include <vector>
using namespace std;

int main()
 {
    int m, n;


    cout << "Enter number of rows and columns: ";

    cin >> m >> n;


    vector<vector<int>> mat(m, vector<int>(n));


    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
         {

            cin >> mat[i][j];

     
         }
     }

    
    cout << "Original Matrix:" << endl;
    for (int i = 0; i < m; i++)
     {

        for (int j = 0; j < n; j++)
         {
            cout << mat[i][j] << " ";
        }

        cout << endl;
     }

    vector<vector<int>> result(n, vector<int>(m));


    for (int j = n - 1; j >= 0; j--) 
    {
        for (int i = 0; i < m; i++) 
        {
            result[n - 1 - j][i] = mat[i][j];
        }
     }

    
    cout << "Rotated Matrix (90 degrees counterclockwise):" << endl;


    for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < m; j++)
         {
            cout << result[i][j] << " ";

        }
        cout << endl;
     }

    return 0;
}
