#include <iostream>
using namespace std;
class Books
{
    public:
        int id = 256;
        void printId()
        {
            cout<< "The book id is: "<<id<<endl;
        }
};
int main()
{
    // A class is a collection of related data & functions under a single name

    Books bk;
    bk.printId();
    cout<< "The id is: "<<bk.id<<endl;
    return 0;
}
