#include <iostream>

using namespace std;

int main()
{

  int arr[] = {5,356,5,2,2,36,65,89};
  string arra [] = {"man","bible","jffb","joely"};
   for(int a : arr){
    cout << a <<"\t"<<endl;
  }
 for(int i=0; i < 8;i++){
   cout << arr[i] <<"<- \t ->"<<endl;
 }


  for(auto a : arra){
    cout << a <<"\t"<<endl;
  }
 
    return 0;
}
