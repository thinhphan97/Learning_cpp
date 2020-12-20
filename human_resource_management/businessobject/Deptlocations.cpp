#include "Deptlocations.h"

Deptlocations::Deptlocations(){
    Dnumber = 0;
    Dlocation = " ";
};
Deptlocations::Deptlocations(int dnumber, std::string dlocation){
    Dnumber = dnumber;
    Dlocation = dlocation;
}