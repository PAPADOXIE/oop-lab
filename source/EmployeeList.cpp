#include "../include/EmployeeList.h"
#include <cstdlib>
#include <iostream>
EmployeeList::EmployeeList(){
    size=0;
    List=(Employee**)malloc(size*sizeof(Employee*));
}

EmployeeList EmployeeList::operator +(Employee *x){
    for(int i = 0; i < size; i++){
        if(List[i] == NULL){
            List[i] = x;
            return *this;
        }
    }
    size++;
    List = (Employee**) realloc (List,size*sizeof(Employee*));
    List[size-1]=x;
    return *this;
}

void EmployeeList::operator - (int x){
    for(int i=0;i<size;i++){
        if(x==List[i]->get_id()){
            free(List[i]);
            List[i]=NULL;
        }
    }
}
void EmployeeList::print(int x){
    std::cout<<List[x]->get_id();
}
