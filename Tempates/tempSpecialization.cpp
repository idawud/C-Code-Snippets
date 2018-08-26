#include <iostream>
#include <string>
template<class T>
class CharFinder
{
    public:
        CharFinder(T a)
        {
            std::cout << a <<" is not a valid char"<<std::endl;
        }

} ;
// specialize
template<>
class CharFinder<char>
{
    public:
        CharFinder(char a)
        {
            std::cout << a <<" is a valid char"<<std::endl;
        }

} ;

int main()
{
    //   C++ CLASS TEMPLATES (specialization)
    CharFinder<int> cf(12);
    CharFinder<char> df(56); // valid char
    CharFinder<char> dfy('D'); // valid char
  
    return 0;
}
