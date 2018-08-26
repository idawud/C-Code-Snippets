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
class Description
{
    public:
        void printInfo()
        {
            std::cout<<"We are Using the " << desc <<" class" <<std::endl;
        }
    protected:
        std::string desc;
};
// inheriting all public & protected members of the class Shape
class Rectangle : public Shape, public Description
{
  public:
      Rectangle()
      {
          desc = "Rectangle";
      }

      Rectangle(int h, int w)
      {
          height = h;
          width = w;
          desc = "Rectangle";
      }

      int area()
      {
          return height * width;
      }
};

// inheriting all public & protected members of the class Shape
class Triangle : public Rectangle
{
    // method overriding
  public:
      Triangle()
      {
          desc = "Triangle";
      }
      Triangle(int h, int w)
      {
          height = h;
          width = w;
          desc = "Triangle";
      }
      int area()
      {
          return (height * width/2);
      }
};



int main()
{
    Rectangle rec;
    Triangle tri;
    rec.setValues(10,15);
    tri.setValues(10,15);

    std::cout<<"The Area of the Rectangle is: "<<rec.area()<<std::endl;
    rec.printInfo();
    std::cout<<"The Area of the Triangle is: "<<tri.area()<<std::endl;
    tri.printInfo();

    Rectangle rec2(12,15);
    std::cout<<"The Area of the Rectangle is: "<<rec2.area()<<std::endl;
    rec2.printInfo();

    return 0;
}
