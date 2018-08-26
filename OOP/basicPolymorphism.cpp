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
    Shape *poly = &rec;
    Shape *poly1 = &tri;

    poly1->setValues(10,20);
    poly->setValues(10,20);

    std::cout<<rec.area() << std::endl;
    std::cout<<tri.area() << std::endl;


    return 0;
}
