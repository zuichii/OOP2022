#include "Employee.h"
#include <string>
using namespace std;

Employee::Employee(){

};

Employee::Employee(int pR){
    payRate = pR;
};

int Employee::get_payRate(){
    return payRate;
    
};

void Employee::set_payRate(int pR){
    payRate = pR;
};



