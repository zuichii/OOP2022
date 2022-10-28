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


void Employee::takeABreak(int mins){
    while(energyLevel < 100){

    }
    

}
