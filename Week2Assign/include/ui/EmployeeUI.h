#ifndef EMPLOYEEUI_H
#define EMPLOYEEUI_H
#include "Employee.h"
#include "EmployeeService.h"

class EmployeeUI
{
    public:
        EmployeeUI();
    private:
    void validateInput(char input);
    Employee createRecord();
    EmployeeService employeeService;
};

#endif // EMPLOYEEUI_H
