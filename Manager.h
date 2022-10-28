#ifndef CASUAL_H
#define MANAGER_H
#include "Employee.h"
#include <string>
using namespace std;

class Manager: public Employee{
    protected:
        int hoursWorked;
        int daysWorked;

    
    public:
        int get_hoursWorked();
        void set_hoursWorked(int hW);

        int get_daysWorked();
        void set_daysWorked(int hW);
};


#endif