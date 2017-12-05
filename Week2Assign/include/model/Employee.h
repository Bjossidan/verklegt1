#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>

using namespace std;

class Employee
{
    public:
        Employee(string name, string ssn, double salary, int month, int year);
        string getName();
        string getSSN();
        double getSalary();
        int getMonth();
        int getYear();

        friend ostream& operator <<(ostream& out, const Employee& employee);

    private:
        string name;
        string ssn;
        double salary;
        int month;
        int year;
};

#endif // EMPLOYEE_H
