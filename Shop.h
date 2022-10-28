#ifndef SHOP_H
#define SHOP_H
#include "Employee.h"
#include "Casual.h"
#include "Manager.h"


class Shop{

    private:
        Shop();
    
    protected:
        Employee** employees;
        int count;

    public:
        void addEmployee(Employee *employee);
        Employee **get_employees();
        int get_count();

        static Shop* createShop(int authority);
};


#endif