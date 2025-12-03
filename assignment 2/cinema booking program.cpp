  #include<iostream>
  using namespace std;
  int main()
  {
      const int R = 3;
      const int C = 3;

      int seats[R][C] = {0};
      int T_S = R * C;
      int booked = 0;

      int r, c;

      while (booked < T_S)
      {
          cout << endl << "CINEMA SEATING" << endl;
          cout << "     ";
         for (int col = 1; col <= C; col++)
         {
             cout << col << " ";
          }
          cout << endl;

          for (int row = 0; row < R; row++)
          {
             cout << "ROW" << row + 1 << " ";
              for (int col = 0; col < C; col++)
              {
                 cout << seats[row][col] << " ";
              }
              cout << endl;
          }

          cout << "Enter row number 1-" << R << ": ";
          cin >> r;
          cout << "Enter seat number 1-" << C << ": ";
          cin >> c;

         
          if (seats[r - 1][c - 1] == 1)
          {
              cout << "Seat occupied" << endl;
          }
         else
          {
              seats[r - 1][c - 1] = 1;
             booked++;
              cout << "Seat booked" << endl;
         }
      }

      cout << endl << "All seats booked!" << endl;

      return 0;
 }
