#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

struct Order
{
    int id;
    string name;
    int items;
    double price;
    double total;
};

int main()
{
    vector<Order> orders;
    int n;
    const double LIMIT = 5000.0;

    cout << "Enter number of orders: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Order o;

        cout << "\nOrder " << i + 1 << endl;
        cout << "Order ID: ";
        cin >> o.id;

        cin.ignore();
        cout << "Customer Name: ";
        getline(cin, o.name);

        cout << "Number of items: ";
        cin >> o.items;

        cout << "Price per item: ";
        cin >> o.price;

        o.total = o.items * o.price;
        orders.push_back(o);
    }

    ofstream file("priority_orders.txt");

    for (int i = 0; i < orders.size(); i++)
    {
        if (orders[i].total > LIMIT)
        {
            file << orders[i].id << " "
                 << orders[i].name << " "
                 << orders[i].total << endl;
        }
    }

    file.close();

    ifstream readFile("priority_orders.txt");
    string line;

    cout << "\nPriority Orders (Total > 5000):\n";
    while (getline(readFile, line))
    {
        cout << line << endl;
    }

    readFile.close();
    return 0;
}
