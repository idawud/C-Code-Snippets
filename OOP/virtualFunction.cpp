#include <iostream>
#include <string>
class Shape
{
    public:
        void setValues(int h, int w)
        {
            height = h;
            width = w;
        }
        // virtual functions for redefining in the derived classes
        virtual int area()
        {
            return 0;
        }
        // pure virtual function
        //     virtual int area() = 0;
    protected:
        int height, width;
};

class Rectangle : public Shape
{
  public:
      int area()
      {
          return height * width;
      }
};

class Triangle : public Shape
{
  public:
      int area()
      {
          return height * width/2;
      }
};
int main()
{
    //  POLYMOPHISM
    Rectangle rec;
    Triangle tri;
    Shape poly;

    Shape *poly1 = &tri;
    Shape *poly2 = &rec;
    Shape *poly3 = &poly;

    poly1->setValues(10,20);
    poly2->setValues(10,20);
    poly3->setValues(10,20);

    std::cout<<rec.area() << std::endl;
    std::cout<<tri.area() << std::endl;
    std::cout<<poly.area() << std::endl;


    return 0;
}
