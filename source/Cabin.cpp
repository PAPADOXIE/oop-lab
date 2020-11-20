#include "../include/Cabin.h"
#include <iostream>
#include <cstdlib>

int Cabin::noOfCabins = 0;

Cabin::Cabin(){
    cabinNo = noOfCabins++;
    employee = NULL;
}

void Cabin::operator + (Employee *employee){
    if(employee->get_cabin() == -1){
        employee->set_cabin(cabinNo);
        this->employee = employee;
    }else{
        std::cout << "Employee already has a cabin" << std::endl;
    }
}

void Cabin::operator -- (){
    employee->set_cabin(-1);
    this->employee = NULL;
}

int Cabin::get() const{
    return cabinNo;
}

Cabin::~Cabin(){
    noOfCabins--;
}