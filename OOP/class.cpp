#include <iostream>
using namespace std;
class Books
{
    private:
        string name;
    public:
        // Constructor decleration
        Books(string x)
        {
            setName(x);
        }

        // Destructor decleration
        ~Books()
        {
            cout<<"Destroying all object of Books Class"<<endl;
        }

        // setter fuction
        void setName(string x)
        {
            name = x;
        }

        // getter function
        string getName()
        {
            return name;
        }
};
int main()
{
    // A class is a collection of related data & functions under a single name
    // contructors & destructors in c++

    Books bk("cpp tutorial");
    cout<< bk.getName() << endl;

    Books bk1("JAVA tutorial");
    cout<< bk1.getName() << endl;

    return 0;
}
