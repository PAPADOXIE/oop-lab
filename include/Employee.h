#pragma once
class Employee{
    static int No_of_employee;
    int id;
    int cabin_no;
public:
    Employee();
    int get_id();
    int get_cabin();
    bool assign_cabin(int cab);
    void take_cabin();
};
