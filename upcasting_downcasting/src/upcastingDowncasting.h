#include <iostream>
using namespace std;

class Employee
{
public:
    string empName, empSurname;
    double empSalary;
    Employee(string name, string surname, double salary)
    {
        empName = name;
        empSurname = surname;
        empSalary = salary;
    }
    void displayInformation()
    {
        cout << "Name:" << empName << endl;
        cout << "Surname:" << empSurname << endl;
        cout << "Salary:" << empSalary << endl;
    }
};

class Manager : public Employee
{
public:
    string mngDepartment;
    Manager(string name, string surname, double salary, string department) : Employee(name, surname, salary)
    {
        mngDepartment = department;
    }
    void displayInformation()
    {
        Employee::displayInformation();
        cout << "Department:" << mngDepartment << endl;
    }
    void increaseSalary()
    {
        empSalary += 200;
    }
};
