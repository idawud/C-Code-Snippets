
#include <iostream>
// C++11 Standard new features
int main()
{
    auto a = 23;
    auto b = "Black Sheep";
    auto b_ptr = &a;

    std::cout<<"Auto values : "<< a <<" & " << b << std::endl;
    std::cout<< b_ptr<<std::endl;
    return 0;
}
