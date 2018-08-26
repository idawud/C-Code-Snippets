#include <iostream>

using namespace std;

int main()
{
    /*
   bool bl = false;
   if(bl){
     cout << "Hello tRUE!" << endl;
   }else{
     cout << "Hello fALSE!" << endl;
   }


    int x=65, y=1, sum;
    sum = x + y;
    cout<< "The sum is: "<<sum <<endl;
    */

    cout<< "\t**********************************"<<endl;
    cout<< "\t**                              **"<<endl;
    cout<< "\t** WELCOME TO SIMPLE CALCULATOR **"<<endl;
    cout<< "\t**                              **"<<endl;
    cout<< "\t**********************************"<<endl;

    int num1, num2,opt;
    cout<<"\tPlease Enter Num one: ";
    cin>> num1;
    cout<<"\tPlease Enter Num two: ";
    cin>> num2;

    cout<<"\tOptions\n";
    cout <<"\tAddition: 1 \n";
    cout <<"\tSubtraction: 2 \n";
    cout <<"\tDivision: 3 \n";
    cout <<"\tMultiplication: 4 \n";

    cout<<"Enter Your Option: ";
    cin>> opt;

    switch(opt){
    case 1:
        cout<<"\t"<< num1 <<" + " << num2 << " = "<< (num1 + num2)<<endl;
        break;
    case 2:
        cout<<"\t"<< num1 <<" - " << num2 << " = "<< (num1 - num2)<<endl;
        break;
    case 3:
        cout<<"\t"<< num1 <<" / " << num2 << " = "<< (num1 / num2)<<endl;
        break;
    case 4:
        cout<<"\t"<< num1 <<" * " << num2 << " = "<< (num1 * num2)<<endl;
        break;
    default:
        cout<<"\tInvalid option"<<endl;
    }
    return 0;
}
