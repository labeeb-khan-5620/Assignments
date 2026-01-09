#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

struct Employee
{
    int id;
    string name;
    int annualSalary;
};

int main()
{
    vector<Employee> employees;
    int n;

    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Employee e;
        int monthlySalary;

        cout << "\nEmployee " << i + 1 << endl;
        cout << "ID: ";
        cin >> e.id;

        cin.ignore();
        cout << "Name: ";
        getline(cin, e.name);

        cout << "Monthly Salary: ";
        cin >> monthlySalary;

        e.annualSalary = monthlySalary * 12;
        employees.push_back(e);
    }

    ofstream outFile("high_salary.txt");

    for (int i = 0; i < employees.size(); i++)
    {
        if (employees[i].annualSalary >= 1500000)
        {
            outFile << employees[i].id << " "
                    << employees[i].name << " "
                    << employees[i].annualSalary << endl;
        }
    }

    outFile.close();

    ifstream inFile("high_salary.txt");
    string line;

    cout << "\nEmployees with salary >= 1500000:\n";
    while (getline(inFile, line))
    {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}
