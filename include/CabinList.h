#pragma once
#include "Cabin.h"

class CabinList{
    
    private:
    int size;
    Cabin *cabin_list;

    public:
    CabinList();
    CabinList operator + (Cabin &cabin);
};