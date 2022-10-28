#include "Employee.h"
#include "Casual.h"

Casual::Casual(){

};

Casual::Casual(int payRate){
    payRate = payRate;
};

void Casual::endWorkDay(){
    dayCount++;
    energyLevel = 100;
};

int Casual::get_dayCount(){
    return dayCount;
};

void Casual::set_dayCount(int dC){
    dayCount = dC;
};


void Casual::work(int mins){

};
