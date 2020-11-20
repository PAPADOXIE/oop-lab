#pragma once
#include <../include/Employee.h>
class EmployeeList(){
    Employee **List;
    int max_size;
    int currentsize;
    EmployeeList();
    void add_Employee(Employee);
    void remove_Employee();
}