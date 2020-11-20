#include "../include/CabinList.h"
#include <cstdlib>

CabinList::CabinList(){
    size = 0;
    List = (Cabin**) malloc(size * sizeof(Cabin*));
}

CabinList CabinList::operator + (Cabin *cabin){
    for(int i = 0; i < size; i++){
        if(List[i] == NULL){
            List[i] = cabin;
            return *this;
        }
    }

    size++;
    List = (Cabin**) realloc(List, size * sizeof(Cabin*));
    List[size-1] = cabin;
    return *this;
}

void CabinList::remove(int cabinNo){
    for(int i = 0; i < size; i++){
        if(List[i]->get() == cabinNo){
            free(List[i]);
            List[i] = NULL;
        }
    }
}
