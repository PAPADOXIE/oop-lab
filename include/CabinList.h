#pragma once
#include "Cabin.h"

class CabinList{
    
    private:
    int size;
    Cabin **List; //List of Cabins

    public:
    CabinList();
    CabinList operator + (Cabin *cabin);
    void remove(int cabinNo);

    ~CabinList(); //Destructor

};