#pragma once
#include <../include/Employee.h>
class EmployeeList(){
    Employee **List;
    int size;
    public:
    EmployeeList();
    void operator + (Employee &x);
    void operator - (Employee &x);
}