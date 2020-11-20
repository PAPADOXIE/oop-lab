#include <iostream>
#include "../include/EmployeeList.h"
#include "../include/CabinList.h"

int main(int argc, char* argv[]){ //argv[1] will be filename
    
    if(argc == 1){
        Employee x,z,q,b;EmployeeList y;
        //dCabinList aa;Cabin a;
        ///aa+&a;
        std::cout<<x.get_id(0)<<std::endl;
        y+&x;y+&z;y+&q;
        y.print(2);
        std::cout<<std::endl;
    }else if(argc == 2){

    }else{
        std::cout << "Wrong Usage" << std::endl
                  << "For file handling demo\nUsage: ./program <filename>" << std::endl
                  << "Otherwise: ./program" << std::endl;
        return 0; 
    }

}