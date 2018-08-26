#include <iostream>
// friend class allow other classes to inherit or access it private members
class MyClass
{
    friend class MyOtherClass;
    private:
        int secretKey = 10;
};

class MyOtherClass
{
    public:
        void setSecret(MyClass mc, int ss)
        {
            mc.secretKey = ss;
            std::cout<<"The secret key is: "<<mc.secretKey<<std::endl;
        }
};

int main()
{
    MyClass myc;
    MyOtherClass yoc;

    yoc.setSecret(myc, 22);

    return 0;
}
