#include "../include/Employee.h"
int Employee::No_of_employee=0;
Employee::Employee(){
    id=No_of_employee;
    No_of_employee++;
    cabin_no=-1;
}
void Employee::set_cabin(int cab){
    cabin_no=cab;
}
int get_id(){
    return id;
}
int get_cabin(){
    return cabin_no;
}

