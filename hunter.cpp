#include "animal.h"
#include "hunter.h"
#include <string>
using namespace std;

hunter::hunter(string n, int v){
    name = n;
    volume = v;

};


int hunter::get_kills(){
    return kills;
};

void hunter::set_kills(int k){
    kills = k;
};


string hunter::get_name(){
    return "Hunter: " + name;
}



