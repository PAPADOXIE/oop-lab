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

int Cabin::get() const{
    return cabinNo;
}

Cabin::~Cabin(){
    noOfCabins--;
}