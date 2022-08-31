#include <iostream>
#include "book.h"
using namespace std;

//implementation of default book constructor 
Book::Book(){
    title = "?";
    author = "?";
    state = "Available";
    date = "?";
}

Book::Book(string btitle, string bauthor, string bdate){
    title = btitle;
    author = bauthor;
    date = bdate;
    state = "Available";
}

Book::~Book()
{
}
