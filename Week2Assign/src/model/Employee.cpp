#include "Employee.h"

Employee::Employee(string name, string ssn, double salary, int month, int year) {
    this->name = name;
    this->ssn = ssn;
    this->salary = salary;
    this->month = month;
    this->year = year;
}

string Employee::getName() {
    return this->name;
}

string Employee::getSSN() {
    return this->ssn;
}

double Employee::getSalary() {
    return this->salary;
}

int Employee::getMonth() {
    return this->month;
}

int Employee::getYear() {
    return this->year;
}

ostream& operator <<(ostream& out, const Employee& employee) {
    out << employee.name << ", " << employee.ssn << ", " << employee.salary << ", ";
    out << employee.month << ", " << employee.year << endl;
    return out;
}

