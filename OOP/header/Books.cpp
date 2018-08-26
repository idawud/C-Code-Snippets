#include "Books.h"

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
