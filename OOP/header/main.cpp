#include <iostream>
#include "Books.h"
using namespace std;

int main()
{
    // A class is a collection of related data & functions under a single name
    // header files in c++
    Books bk;
    bk.setBookId(12);
    cout<<"The Book id is : "<< bk.getBookId() <<endl;

    Books bk2(35);
    cout<<"The Book id 2 is : "<< bk2.getBookId() <<endl;


    return 0;
}

/*
    NOTE:
        IN CODEBLOCKS THE HEADER DEFINITION GOES TO Books.cpp
        BUT HERE WE DEFINE IT HERE

*/


// constructor
Books::Books()
{
    //setBookId(x);
}
Books::Books(int x)
{
    setBookId(x);
}
// book id setter
void Books::setBookId(int bookid__)
{
    bookId = bookid__;
}

// book id getter
int Books::getBookId()
{
    return bookId;
}
