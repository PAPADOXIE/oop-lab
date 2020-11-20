#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "CabinList.h"
#include "EmployeeList.h"

class FileHandler{

    private:
    CabinList *c_list;
    EmployeeList* e_list;

    public:
    FileHandler(CabinList *c_list, EmployeeList *e_list);
    void save(std::string filename); //Save data to file
    void read(std::string filename); //Read data from file

};