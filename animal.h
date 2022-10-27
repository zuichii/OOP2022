#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std;


class animal{

    protected:
        string name;
        int animalID;
        int volume;

    public: 
        animal();
        animal(string n, int v);

        void set_name(string n);
        void set_volume(int v);  
        
        virtual string get_name() = 0;
        int get_animalID();
        int get_volume();

};
#endif
