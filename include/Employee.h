#pragma once
class Employee{
    static int No_of_employee;
    int id;
    int cabin_no;
    void assign_cabin(int cab);
    void take_cabin();
};
int Employee::No_of_employee=0;