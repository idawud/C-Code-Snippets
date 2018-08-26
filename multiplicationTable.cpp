#include <iostream>
using namespace std;
/*
        SAMPLE OUTPUT > With Number Inserted as 8
        *************************************
        **                                 **
        ** WELCOME TO Multiplication Table **
        **                                 **
        *************************************
Please Enter Number for the table fro 1 to .... : 8

1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  | 10  | 11  | 12
************************************************************************
1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  10 |  11 |  12
2  |  4  |  6  |  8  |  10 |  12 |  14 |  16 |  18 |  20 |  22 |  24
3  |  6  |  9  |  12 |  15 |  18 |  21 |  24 |  27 |  30 |  33 |  36
4  |  8  |  12 |  16 |  20 |  24 |  28 |  32 |  36 |  40 |  44 |  48
5  |  10 |  15 |  20 |  25 |  30 |  35 |  40 |  45 |  50 |  55 |  60
6  |  12 |  18 |  24 |  30 |  36 |  42 |  48 |  54 |  60 |  66 |  72
7  |  14 |  21 |  28 |  35 |  42 |  49 |  56 |  63 |  70 |  77 |  84
8  |  16 |  24 |  32 |  40 |  48 |  56 |  64 |  72 |  80 |  88 |  96
*/


int main()
{
    cout<< "\t*************************************"<<endl;
    cout<< "\t**                                 **"<<endl;
    cout<< "\t** WELCOME TO Multiplication Table **"<<endl;
    cout<< "\t**                                 **"<<endl;
    cout<< "\t*************************************"<<endl;

    int stopNum;
    cout<<"Please Enter Number for the table fro 1 to .... : ";
    cin >> stopNum;
    cout<<endl;

    for(int i =1; i<= 12; i++){
            if (i != 12){
                if(i >=9) { cout<<i<<"  | "; }
                else { cout<<i<<"  |  "; }
            }
            else {cout<<i;}
    }
    cout<<endl;

    for(int i =1; i<= (12*6); i++) {cout<<"*";}
    cout<<endl;

    for(int i =1; i<= stopNum; i++){
        for(int x =1; x<= 12; x++){
            if (x != 12){
                if((i*x) >= 90) { cout<<i*x<<" | "; }
                else if((i*x) >= 10) { cout<<i*x<<" |  "; }
                else { cout<<i*x<<"  |  ";}
                }
            else {cout<<i*x;}
        }
        cout<<endl;
    }



    return 0;
}
