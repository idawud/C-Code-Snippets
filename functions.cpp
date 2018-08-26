#include <iostream>
using namespace std;

void man(string name){
cout<< "Hello, "<<name<<endl;
}
double sum(double num1, double num2){
    return num1 + num2;
}

//default parameters, protyping definition @ buttom
double sumy(double num1=20.0, double num2=10.2);

bool isEven(int n){
    if (n % 2 == 0){
        return true;
    }else{
    return false;
    }
}

int main()
{
    int a, b;
    cout<<"The sumy of no parameter:  "<<sumy()<<endl;
    cout<<"The sumy of one parameter: "<<sumy(10)<<endl;
    cout<<"The sumy of two parameters: "<<sumy(10,2)<<endl;
    man("Dawud");
    //cout<<endl<<sum(5.5, 5.5)<<endl<<isEven(4);
    cout<<"Please Enter two numbers to sum: ";
    cin>>a>>b;
    cout<<"The sum of "<<a <<" + "<<b<<" is: "<<sum(a, b)<<endl;
    return 0;
}

//default parameters
double sumy(double num1, double num2){
    return num1 + num2;
}