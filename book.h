#ifndef BOOK_H
#define BOOK_H
#include <string>
using namespace std;

// Class definition for a book
class Book
{
public:
    //constructors
    Book();
    Book(string btitle, string bauthor, string bdate);
    
    //attributes
    string title;
    string author;
    string date;
    string state;

    //destructor 
    ~Book();
};
#endif //PANDA_H