#include <iostream>
// a basic inheritance in C++

class Shape
{
    public:
        void setValues(int h, int w)
        {
            height = h;
            width = w;
        }
    protected:
        int height, width;
};

// inheriting all public & protected members of the class Shape
class Rectangle : public Shape
{
  public:
      int area()
      {
          return height * width;
      }
};

// inheriting all public & protected members of the class Shape
class Triangle : public Shape
{
  public:
      int area()
      {
          return (height * width/2);
      }
};
/*
// NOTE:
//    THE TRANGLE CLASS COULD HAVE INHERITED FROM RECTANGLE AND 
//    OVERRIDE THE area() Method, LIKE THIS:

class Triangle : public Rectangle
{
    // method overriding
  public:
      int area()
      {
          return (height * width/2);
      }
};
*/


int main()
{
    Rectangle rec;
    Triangle tri;
    rec.setValues(10,15);
    tri.setValues(10,15);

    std::cout<<"The Area of the Rectangle is: "<< rec.area() <<std::endl;
    std::cout<<"The Area of the Triangle is: "<< tri.area() <<std::endl;

    return 0;
}
