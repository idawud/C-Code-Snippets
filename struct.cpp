#include <iostream>
using namespace std;
struct Books
{
    string name;
    string author;
    string isbn;
    int id;
};
int main()
{
    //   Data Structure or struct
    struct Books book1;
    book1.author = "Ismail Dawud";
    book1.name = "My First C++ Journey";
    book1.isbn = "585-85A-545-JK9";
    book1.id = 1;

    cout<<"Book name: " << book1.name << endl;
    cout<<"Book author: " << book1.author << endl;
    cout<<"Book ISBN: " << book1.isbn << endl;
    cout<<"Book Id: " << book1.id << endl;



    return 0;
}
