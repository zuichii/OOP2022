#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"
#include <string>
using namespace std;

class Manager: public Employee{
    protected:
        float hoursWorked;
        int daysWorked;

    
    public:
        Manager();
        Manager(int payRate);
        
        float get_hoursWorked();
        void set_hoursWorked(float hW);

        int get_daysWorked();
        void set_daysWorked(int dW);

        void work();
        float pay();
};


#endif