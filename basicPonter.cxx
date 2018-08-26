#include <iostream>
using namespace std;

int main()
{
    // wHAT IS A POINTER ?
    // A Pointer: is a variable whose value is an address to another variable
    int var = 22;
    double varr = 0.22;

    int * var_ptr = &var;

    double *varr_ptr;
    varr_ptr = &varr;

    cout<<"******Initial Int************\n";
    cout<< &var <<endl;
    cout<< var_ptr <<endl;
    cout<< *var_ptr <<endl;

    cout<<"******Initial Double************\n";
    cout<< &varr <<endl;
    cout<< varr_ptr <<endl;
    cout<< *varr_ptr <<endl;

    cout<<"******updated Int************\n";
    var=11;
    cout<< var_ptr <<endl;
    cout<< *var_ptr <<endl;


    return 0;
}
