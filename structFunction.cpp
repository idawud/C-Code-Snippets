#include <iostream>
using namespace std;
struct Books
{
    string name;
    string author;
    string isbn;
    int id;
};
void printBook(struct Books book)
{
    cout<<"Book name: " << book.name << endl;
    cout<<"Book author: " << book.author << endl;
    cout<<"Book ISBN: " << book.isbn << endl;
    cout<<"Book Id: " << book.id << endl;
}
int main()
{
    //   Data Structure or struct
    // passing struct to function
    struct Books book1;
    book1.author = "Ismail Dawud Ibrahim";
    book1.name = "My First C++ Journey";
    book1.isbn = "585-85A-545-JK9";
    book1.id = 118;

    printBook(book1);



    return 0;
}
