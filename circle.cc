#include <iostream>
#include <cstdio>
#include <cmath>
#include <circle.h>
#define PI 3.1415926535

template<typename Type>
void circle<Type>::populate_classObj(Type a, Type b, Type c, Type d){
	x1 = a;
	y1 = b;
	x2 = c;
	y2 = d;
}

template<typename Type>
Type circle<Type>::getDistance(Type x1, Type y1, Type x2, Type y2){
	return sqrt( ((x2-x1)*(x2-x1)) + ((y2-y1)*(y2-y1)) );
}

template<typename Type>
Type circle<Type>::getRadius(Type x1, Type y1, Type x2, Type y2){
	return getDistance(x1, y1, x2, y2);
}

template<typename Type>
Type circle<Type>::getCircumference(Type x1, Type y1, Type x2, Type y2){
	return (2*PI*getRadius(x1, y1, x2, y2));
}

template<typename Type>
Type circle<Type>::getArea(Type x1, Type y1, Type x2, Type y2){
	return (PI*getRadius(x1, y1, x2, y2)*getRadius(x1, y1, x2, y2));
}