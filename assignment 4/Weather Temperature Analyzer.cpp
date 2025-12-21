#include <iostream>
#include <iomanip>
using namespace std;

int T_D[7][4];
int highest ;
int lowest;

void arraydata()
{
    for (int i = 0; i < 7; i++)
      {
    for (int j = 0; j < 4; j++)
       
    {
      
          
          cout << "Enter temperature of week " << i + 1
             
          << " time " << j + 1 << ": ";
         
          cin >> T_D[i][j];    
            }
   }
}

void highest_lowest()
{
  
  int highest = T_D[0][0];
  
  int lowest  = T_D[0][0];


  
  for (int i = 0; i < 7; i++)
  
  
  {
  
    for (int j = 0; j < 4; j++)
  
    {

      if (T_D[i][j] > highest)
  
      highest = T_D[i][j];


      if (T_D[i][j] < lowest)

      lowest = T_D[i][j];

    }
    }


    cout << "\nHighest Temperature: " << highest << endl;
 
    cout << "Lowest Temperature: " << lowest << endl;
}


void table()
{
    cout << "\nTemperature Table\n\n";

 
    cout << setw(8) << "Week";
    for (int a = 0; a < 4; a++)
    {
        cout << setw(8) << "T" << a + 1;
    }
    cout << endl;

    
    cout << string(40, '-') << endl;

    
    for (int i = 0; i < 7; i++)
    {
        cout << setw(8) << i + 1;   

        for (int j = 0; j < 4; j++)
        {
            cout << setw(8) << T_D[i][j];
        }
        cout << endl;
    }
}
void result_table()
{
    

cout << " \n Average\n\n";

  for (int b= 0; b < 7; b++)
    {
        cout << setw(8) << "W" << b + 1;
    }
    cout << endl;
    
    cout<<string(65,'*')<<endl;
    for (int i = 0  ; i <7;i++)
    { int sum=0; 
        for (int j=0;j<4;j++)
        {
            sum += T_D[i][j];
            
        }
        cout << setw(8)<<sum/4;
    }
}


int main()
{
    arraydata();
 
    highest_lowest();
    
   table();
   
   result_table();
 
    return 0;
}
