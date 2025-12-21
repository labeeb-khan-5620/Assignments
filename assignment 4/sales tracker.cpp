#include <iostream>
using namespace std;

void inputsales(int arr[][5], int a)
{
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout << "Enter sales of day " << i+1 << " of product " << j+1 << ": ";
            cin >> arr[i][j];
        }
    }
}

int weeklysales(int arr[][5], int a)
{
    for(int j = 0; j < 5; j++) 
    {
        int total = 0;
        for(int i = 0; i < a; i++) 
        {
            total += arr[i][j];
        }
        cout << "\nTotal sales of product " << j+1 
             << " in " << a << " days = " << total << endl;
    }
    return 0;
}

int maxrevenue(int arr[][5], int a)
{
    int maxProduct = 0;
    int maxTotal = 0;

    for(int j = 0; j < 5; j++)
    {
        int total = 0;
        for(int i = 0; i < a; i++) 
        {
            total += arr[i][j];
        }
        if(total > maxTotal)
        {
            maxTotal = total;
            maxProduct = j;
        }
    }

    cout << "\nProduct " << maxProduct + 1 
         << " generated the maximum revenue: " << maxTotal << endl;

    return 0;
}
int bestday(int arr[][5], int a)
{
    int bestday=0;
    int total=0;
    for (int i=0;i<a;i++)
    {
        total=0;
        for (int j=0;j<5;j++)
        {
            total+=arr[i][j];
            
        }
        if (bestday<total)
        {
            bestday++;
            
        }
        
    }
    cout<<"best day is day: "<<bestday;
    return 0;
}

int main()
{
    int arr[7][5];
    inputsales(arr, 7);
    weeklysales(arr, 7);
    maxrevenue(arr, 7);
bestday(arr,7);
    return 0;
}
