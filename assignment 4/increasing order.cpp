#include <iostream>
using namespace std;

int main()
 {

     
     int N;
     cout << "Enter the size of the square matrix: ";

    cin >> N;


    int mat[10][10];     

    int arr[100];         

    int k = 0;

    cout << "Enter matrix elements:" << endl;

    for(int i = 0; i < N; i++) 
    {
        for(int j = 0; j < N; j++) 
        {
            cin >> mat[i][j];
            arr[k++] = mat[i][j];  
        }
    }


    
    for(int i = 0; i < k-1; i++)
     {
        for(int j = 0; j < k-1-i; j++) 
        {
            if(arr[j] > arr[j+1])
             {
                int temp = arr[j];

                arr[j] = arr[j+1];

                arr[j+1] = temp;
            }
         }
          
       }

    
    k = 0;

    for(int i = 0; i < N; i++)
     {
        for(int j = 0; j < N; j++)
         {
            mat[i][j] = arr[k++];
        }
    }

   
    cout << "RESULT:" << endl;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
