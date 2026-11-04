
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int empId;
    string name;
    float basic, hra, da, pf, gross, net;

public:
    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Basic Salary: ";
        cin >> basic;
    }

    void calculate()
    {
        hra = basic * 0.20;
        da = basic * 0.10;
        pf = basic * 0.12;

        gross = basic + hra + da;
        net = gross - pf;
    }

    void display()
    {
        cout << "\n----- Employee Payroll -----\n";
        cout << "Employee ID: " << empId << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basic << endl;
        cout << "HRA: " << hra << endl;
        cout << "DA: " << da << endl;
        cout << "PF Deduction: " << pf << endl;
        cout << "Gross Salary: " << gross << endl;
        cout << "Net Salary: " << net << endl;
    }
};

int main()
{
    Employee e;

    e.input();
    e.calculate();
    e.display();

    return 0;
}
