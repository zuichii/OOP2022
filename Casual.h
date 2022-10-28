#ifndef CASUAL_H
#define CASUAL_H
#include "Employee.h"
#include <string>
using namespace std;

class Casual: public Employee{
    protected:

        float hoursWorked[7] = {0,0,0,0,0,0,0};
        int dayCount = 0;

    public:
        void endWorkDay();

        int get_dayCount();
        void set_dayCount(int dC);



};


#endif