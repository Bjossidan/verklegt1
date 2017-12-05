#include "EmployeeUI.h"

EmployeeUI::EmployeeUI() {
    while(true) {
        cout << "Welcome employee to your salary overview." << endl;
        cout << "*****************************************" << endl;
        cout << "Please pick a corresponding number for an option:" << endl;
        cout << "1: Add record" << endl;
        cout << "2: Find all records for SSN" << endl;
        cout << "3: Find annual salary for SSN" << endl;
        cout << "4: Find highest paid employee" << endl;
        cout << endl;
        char input;
        cin >> input;
        cout << endl;
        validateInput(input);
    }
}

void EmployeeUI::validateInput(char input) {
    if(input == '1') {
        cout << "Add record." << endl;
        employeeService.addRecord(createRecord()); ///Býr til tilvik af record og fer síðan í service og á síðan að bæta því við, þann part vantar.
    }
    else if(input == '2') {
        cout << "Find all records for SSN" << endl; ///Næstu möguleikar þyrftu bara að skoða það sem sent er í skjalið(skoða getline þrjiða parameter sem Bjöggi minnist á).
    }
    else if(input == '3') {
        cout << "Find annual records for SSN." << endl;
    }
    else if(input == '4') {
        cout << "Find highest paid employee." << endl;
    }
    else {
        cout << "Invalid option!" << endl;
    }
    cout << endl;
}

Employee EmployeeUI::createRecord() {
    cout << "Name: " << endl;
    string name, ssn;
    cin >> name;
    cout << "SSN: " << endl;
    cin >> ssn;
    cout << "Salary: " << endl;
    double salary;
    cin >> salary;
    cout << "Month: " << endl;
    int month, year;
    cin >> month;
    cout << "Year: " << endl;
    cin >> year;
    Employee employee(name, ssn, salary, month, year);
    return employee;
}
