#ifndef BOOKS_H
#define BOOKS_H
#include <iostream>
using namespace std;

class Books
{
    public:
        Books();
        Books(int x);
        void setBookId(int bookid__);
        int getBookId();

    private:
        int bookId;
};

#endif // BOOKS_H
