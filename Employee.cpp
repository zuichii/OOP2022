#include "Employee.h"
#include <string>
using namespace std;

Employee::Employee(){

};

Employee::Employee(int payRate){
    payRate = payRate;
};

int Employee::get_payRate(){
    return payRate;
    
};

void Employee::set_payRate(int payRate){
    payRate = payRate;
};

float Employee::get_energyLevel(){
    return energyLevel;
};

void Employee::set_energyLevel(float eL){
    energyLevel = eL;
};



void Employee::takeABreak(int mins){
    while(energyLevel < 100){

    }
    return;

}
