#include "vegie.h"
#include "animal.h"
#include <string>
using namespace std;

vegie::vegie(string n, int v){
    name = n;
    volume = v;
};

string vegie::get_favourite_food(){
    return favourite_food;
};

void vegie::set_favourite_food(string f){
    favourite_food = f;

};

string vegie::get_name(){
    return "Safe: " + name;
};
