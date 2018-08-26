#include <iostream>
#include <string>
template<class T>
class Maths
{
    T a,b;
public:
    Maths(T x, T y)
    {
        a = x;
        b = y;
    }

    T maxValue();

} ;
template<class T>
T Maths<T>::maxValue()
{
    return ( a > b? a : b);
}


int main()
{
    //   C++ CLASS TEMPLATES
    Maths<int> ma(2,22);
    std::cout<<ma.maxValue()<<std::endl;

    Maths<std::string> ma1("Dawud","Ali");
    std::cout<<ma1.maxValue()<<std::endl;

    Maths<double> ma2(2.66,0.22);
    std::cout<<ma2.maxValue()<<std::endl;



    return 0;
}