#ifndef HUNTER_H
#define HUNTER_H
#include <string>
#include "animal.h"
using namespace std;

class hunter: public animal{

    private:
        static int nextID;

    protected:
        int kills = 0;

    public:
        hunter(string n, int v);
        
        int get_kills();
        void set_kills(int k);

        string get_name();




};



#endif