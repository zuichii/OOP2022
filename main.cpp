#include <iostream>
#include "book.h"
using namespace std;

int main(){
    Book book1("Treehouse", "Andy", "2000");


    cout << book1.title << endl;
    cout << book1.author << endl;
    cout << book1.date << endl;
    cout << book1.state << endl;

    

    
}