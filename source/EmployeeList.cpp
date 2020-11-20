#include <../include/EmployeeList.h>
EmployeeList::EmployeeList(){
    size=0;
    List=(Employee**)malloc(size*sizeof(Employee*));
}
EmployeeList EmployeeList::operator +(Employee *x){
    size++;(Employee**)realloc(List,size*sizeof(Employee*);
    List(size-1)=x;
    return *this;
}
EmployeeList EmployeeList::operator - (int x){
    for(int i=0;i<size;i++){
        if(x==List[i]->get_id()){
            free(List[i]);
            List[i]=NULL;
        }
    }
    return *this;
}
