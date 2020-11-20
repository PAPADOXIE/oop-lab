#pragma once
class Employee{
    static int No_of_employee;
    int id;
    int cabin_no;
public:
    Employee();
    int get_id() const;
    int get_cabin() const;
    void set_cabin(int cab);
};
