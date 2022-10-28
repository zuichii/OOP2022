#include "Employee.h"
#include "Manager.h"


Manager::Manager(){

};

Manager::Manager(int payRate){
    payRate = payRate;
}

float Manager::get_hoursWorked(){
    return hoursWorked;

};

void Manager::set_hoursWorked(float hW){
    hoursWorked = hW;
};


int Manager::get_daysWorked(){
    return daysWorked;
};


void set_daysWorked(int hW);