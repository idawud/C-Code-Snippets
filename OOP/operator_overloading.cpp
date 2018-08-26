#include <iostream>

using namespace std;
class vector
{
    private:
        int x, y;
    public:
        vector() {};
        vector(int a, int b);
        vector operator+(const vector&);
        vector operator-(const vector&);
        vector operator*(const vector&);
        void display();

};
vector::vector(int a, int b)
{
    x = a;
    y = b;
}
// plus + overloading decleration
vector vector::operator+(const vector& parameter)
{
    vector temp;
    temp.x = x + parameter.x;
    temp.y = y + parameter.y;
    return temp;
}

// sub - overloading decleration
vector vector::operator-(const vector& parameter)
{
    vector temp;
    temp.x = x - parameter.x;
    temp.y = y - parameter.y;
    return temp;
}

// mult * overloading decleration
vector vector::operator*(const vector& parameter)
{
    vector temp;
    temp.x = x * parameter.x;
    temp.y = y * parameter.y;
    return temp;
}

void vector::display()
{
    cout<<"("<<x<<","<<y<<")";
}



int main()
{
    vector vec1(4,2);
    vector vec2(2,5);
    vector add = vec1 + vec2;
    vector sub = vec1 - vec2;
    vector mul = vec1 * vec2;
    cout<<"The Addition of ";  vec1.display(); cout<<" + "; vec2.display(); cout<<" = "; add.display(); cout<<endl;
    cout<<"The Subtraction of ";  vec1.display(); cout<<" + "; vec2.display(); cout<<" = "; sub.display(); cout<<endl;
    cout<<"The Multiplication of ";  vec1.display(); cout<<" + "; vec2.display(); cout<<" = "; mul.display(); cout<<endl;

    return 0;
}
