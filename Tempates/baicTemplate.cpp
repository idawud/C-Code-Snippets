#include <iostream>
#include <string>
template<class dataType>
dataType add (dataType a, dataType b)
{
    return a + b;
}

template<class dataType, class dtType>
dataType add (dataType a, dtType b)
{
    return a + b;
}

template<class first, class second>
first Max(first a, second b)
{
    return ( a > b ? a : b);
}



int main()
{
    //   C++ TEMPLATES
    std::cout << add(1.55, 23.50) << std::endl; //double type
    std::cout << add(2, 23) << std::endl; // int type
    std::cout << add(1.55f, 23.50f) << std::endl; // float type


    std::cout << add(23.50f, 11) << std::endl;  // data type mixture

    std::cout << Max(4, 110.99) << std::endl;  // data type mixture


    return 0;
}
