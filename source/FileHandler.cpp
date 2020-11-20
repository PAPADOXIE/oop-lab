#include "../include/FileHandler.h"

FileHandler::FileHandler(CabinList *c_list, EmployeeList *e_list){
    this->c_list = c_list;
    this->e_list = e_list;
}

void FileHandler::save(std::string filename){
    std::ofstream file;
    file.open(filename, std::ios::binary);

    if(file.failbit){
        std::cout << "Error Opening the File. Check if it exists." << std::endl;
        return;
    }

    

    file.close();
}

void FileHandler::read(std::string filename){
    std::ifstream file;
    file.open(filename, std::ios::binary);

    if(file.failbit){
        std::cout << "Error Opening the File. Check if it exists." << std::endl;
        return;
    }

    file.close();
}