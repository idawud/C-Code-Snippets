#include <iostream>
using namespace std;

void passByValue(int val)
{
    val = 100;
}

void passByReference(int *val)
{
    *val = 100;
}

int main()
{
    //   POINTER
    // pass by reference ( functions )

    int x = 20;
    passByValue(x);
    cout<<"passByValue: "<<x << endl;

    passByReference(&x);
    cout<<"passByReference: "<<x << endl;

    return 0;
}
