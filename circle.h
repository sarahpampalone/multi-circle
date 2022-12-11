#include <iostream>
#include <cstdio>
#include <cmath>
#define PI 3.1415926535

template <typename Type>
class circle{
  private :
    Type x1,y1,x2,y2;
  public :
    circle(Type a = 0, Type b = 0, Type c = 0, Type d = 0){
      x1 = a;
      y1 = b;
      x2 = c;
      y2 = d;
    }
    void populate_classObj(Type, Type, Type, Type);
    double getRadius();
    double getCircumference();
    double getArea();
  protected :
    double getDistance();
}
