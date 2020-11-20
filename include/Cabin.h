#pragma once
#include "Employee.h"

class Cabin{

    private:
    static int noOfCabins;
    int cabinNo;
    Employee *employee;
    
    public:
    Cabin(); //Default Constructor
    Cabin(Employee *employee); //Constructor which assigns employee as well

    ~Cabin(); //Destructor

};