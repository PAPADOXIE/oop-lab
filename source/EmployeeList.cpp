#include "../include/EmployeeList.h"
#include <cstdlib>

EmployeeList::EmployeeList(){
    size=0;
    List=(Employee**)malloc(size*sizeof(Employee*));
}
void EmployeeList::operator +(Employee *x){
    size++;
    List = (Employee**) realloc (List,size*sizeof(Employee*));
    List[size-1]=x;
}

void EmployeeList::operator - (int x){
    for(int i=0;i<size;i++){
        if(x==List[i]->get_id()){
            free(List[i]);
            List[i]=NULL;
        }
    }
}
