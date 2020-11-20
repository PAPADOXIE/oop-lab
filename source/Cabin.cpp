#include "../include/Cabin.h"
#include <cstdlib>

int Cabin::noOfCabins = 0;

Cabin::Cabin(){
    cabinNo = noOfCabins++;
    employee = NULL;
}

Cabin::Cabin(Employee *employee){
    this->employee = employee;
}

Cabin::~Cabin(){
    noOfCabins--;
}