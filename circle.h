#include <iostream>
#include <cstdio>
#include <cmath>
#define PI 3.1415926535

template<typename Type>
class circle
{
	private:
		Type x1, y1, x2, y2;
	public:
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
	protected:
		double getDistance();
};

template<typename Type>
void circle<Type>::populate_classObj(Type a, Type b, Type c, Type d){
	x1 = a;
	y1 = b;
	x2 = c;
	y2 = d;
}

template<typename Type>
double circle<Type>::getDistance(){
	return sqrt( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) );
}

template<typename Type>
double circle<Type>::getRadius(){
	return getDistance();
}

template<typename Type>
double circle<Type>::getCircumference(){
	return (2*PI*getRadius());
}

template<typename Type>
double circle<Type>::getArea(){
	return (PI*getRadius()*getRadius());
}