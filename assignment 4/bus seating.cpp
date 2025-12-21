#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 10;


void displaySeats(int seats[ROWS][COLS]) {
    cout << "\nBus Seat Layout (0=Empty, 1=Reserved):\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << seats[i][j] << " ";
        }
        cout << "\n";
    }
}


void reserveSeat(int seats[ROWS][COLS]) {
    int row, col;
    cout << "Enter row (1-10) to reserve: ";
    cin >> row;
    cout << "Enter seat (1-10) to reserve: ";
    cin >> col;

    if (row < 1 || row > ROWS || col < 1 || col > COLS) {
        cout << "Invalid seat number!\n";
        return;
    }

    if (seats[row-1][col-1] == 0) {
        seats[row-1][col-1] = 1;
        cout << "Seat reserved successfully!\n";
    } else {
        cout << "Seat already reserved!\n";
    }
}


void cancelSeat(int seats[ROWS][COLS]) {
    int row, col;
    cout << "Enter row (1-10) to cancel: ";
    cin >> row;
    cout << "Enter seat (1-10) to cancel: ";
    cin >> col;

    if (row < 1 || row > ROWS || col < 1 || col > COLS) {
        cout << "Invalid seat number!\n";
        return;
    }

    if (seats[row-1][col-1] == 1) {
        seats[row-1][col-1] = 0;
        cout << "Reservation cancelled successfully!\n";
    } else {
        cout << "Seat is already empty!\n";
    }
}

void rowStatus(int seats[ROWS][COLS]) {
    int full = 0, partial = 0, empty = 0;

    for (int i = 0; i < ROWS; i++) {
        int reservedCount = 0;
        for (int j = 0; j < COLS; j++) {
            if (seats[i][j] == 1) reservedCount++;
        }

        if (reservedCount == COLS) full++;
        else if (reservedCount == 0) empty++;
        else partial++;
    }

    cout << "\nRow Status:\n";
    cout << "Fully occupied rows: " << full << endl;
    cout << "Partially occupied rows: " << partial << endl;
    cout << "Empty rows: " << empty << endl;
}


void menu() {
    int seats[ROWS][COLS] = {0};
    int choice;

    do {
        cout << "\n=== Bus Seat Reservation Menu ===\n";
        cout << "1. Display Seats\n";
        cout << "2. Reserve a Seat\n";
        cout << "3. Cancel a Reservation\n";
        cout << "4. Row Status\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: displaySeats(seats); break;
            case 2: reserveSeat(seats); break;
            case 3: cancelSeat(seats); break;
            case 4: rowStatus(seats); break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while(choice != 5);
}

int main() {
    menu();
    return 0;
}
