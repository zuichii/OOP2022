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


void Manager::set_daysWorked(int dW){
    daysWorked = dW;
};


void Manager::work(){
    return;

};

float Manager::pay(){
    return 0;

};