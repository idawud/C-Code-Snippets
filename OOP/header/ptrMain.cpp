#include <iostream>
#include "Books.h"
using namespace std;

int main()
{
    // A class is a collection of related data & functions under a single name
    // header files in c++
    // pointer classes
    Books bk;
    Books *bk_ptr = &bk;

    // the following two sets of block each performs the same functions

    bk.setBookId(12); // Normal class usage
    cout<<"The Book id is : "<< bk.getBookId() <<endl;

    (*bk_ptr).setBookId(22355); // pointer class usage using reference
    cout<<"The Book id is : "<< (*bk_ptr).getBookId() <<endl;

    bk_ptr->setBookId(110); // pointer class using arrow operator
    cout<<"The Book id is : "<< bk_ptr->getBookId() <<endl;

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
