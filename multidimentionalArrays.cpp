#include <iostream>
using namespace std;


int main()
{
    // Ternary operators
    auto x = (3>8) ? "black jeans\n":"blue jeans\n";
    cout<<x;

    int mult [3][3] = {
                        {1, 2, 3},
                        {4, 55, 6},
                        {7, 8, 9}
                    };

    cout<<"<***> Let Enter The Matrix </***>"<<endl;
    for(int i=0; i< 3; i++){
         for(int v : mult[i])  { cout<< v <<"\t";}
        cout<<endl;
    }
    return 0;
}
