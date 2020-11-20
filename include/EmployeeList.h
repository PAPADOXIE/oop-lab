#pragma once
#include "Employee.h"

class EmployeeList{

    Employee **List;
    int size;

    public:
    EmployeeList();
    EmployeeList operator + (Employee *x);
    void operator - (int x);
    void print(int x);
};