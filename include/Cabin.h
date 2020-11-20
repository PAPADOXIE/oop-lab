#pragma once
#include "Employee.h"

class Cabin{

    private:
    static int noOfCabins;
    int cabinNo;
    Employee *employee;
    
    public:
    Cabin(); //Default Constructor
    void operator + (Employee *employee); //Assign a cabin to an employee
    void operator -- (); //Removes employee from cabin
    int get() const; //Returns cabinNo

    ~Cabin(); //Destructor

};