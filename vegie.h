#ifndef VEGIE_h
#define VEGIE_H
#include "animal.h"
#include <string>
using namespace std;

class vegie: public animal{
    
    private:
        static int nextID;
    
    protected:
        string favourite_food;
    
    
    public:
        vegie(string n, int v);

        string get_favourite_food();
        void set_favourite_food(string f);

        string get_name();
        

};



#endif