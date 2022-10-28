#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee{
    protected:
        int payRate;
        float energyLevel = 100;

    public:
        Employee();
        Employee(int payRate);

        int get_payRate();
        void set_payRate(int pR);

        void takeABreak(int mins);

        virtual void work(int mins) = 0;
        virtual float pay() = 0;

};

#endif