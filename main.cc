//Sarah Pampalone
//ECE 2620 001

#include <iostream>
#include <cstdio>
#include <cmath>
#include <circle.h>
#define PI 3.1415926535

using namespace std;


int main()
{
	double a = -1.5;
	double b = -6.65;
	double c = -0.5;
	double d = 10.0;
	int e = 1;
	int f = 3;
	int g = 0;
	int h = 0;
	circle <int> myObj_1(e,f);
	circle <double> myObj_2(a,b,c,d);
	double x1, y1, x2, y2;
	int switchinput;
	cout << "The current coordinates for circle 1 are (" << e << "," << f << "),(" << g << "," << h << ")." << endl;
	cout << "The current coordinates for circle 2 are (" << a << "," << b << "),(" << c << "," << d << ")." << endl;
	
do{
	cout << "Pick a function : " << endl;
	cout << "1. Calculate the radii" << endl;
	cout << "2. Calculate the circumferences" << endl;
	cout << "3. Calculate the areas" << endl;
	cout << "4. Enter new coordinates for Object 1" << endl;
	cout << "5. Enter new coordinates for Object 2" << endl;
	cout << "6. End the program" << endl;
		cin >> switchinput; //switch option

	switch(switchinput){
		case 1 : //radius
			cout << "Object 1 : " << myObj_1.getRadius() << "\n";
			cout << "Object 2 : " << myObj_2.getRadius() << "\n";
			break;
		case 2 :  //circumference
			cout << "Object 1 : " << myObj_1.getCircumference() << "\n";
			cout << "Object 2 : " << myObj_2.getCircumference() << "\n";
			break;
		case 3 : //area
			cout << "Object 1 : " << myObj_1.getArea() << "\n";
			cout << "Object 2 : " << myObj_2.getArea() << "\n";
			break;
		case 4 :
			cout << "Please enter your first coordinates (center of circle) : \n";
				cin >> x1;
				cin >> y1;
			cout << "Please enter your second coordinates : \n";
				cin >> x2;
				cin >> y2;
			myObj_1.populate_classObj(x1, y1, x2, y2);
			break;
		case 5 :
			cout << "Please enter your first coordinates (center of circle) : \n";
				cin >> x1;
				cin >> y1;
			cout << "Please enter your second coordinates : \n";
				cin >> x2;
				cin >> y2;
			myObj_2.populate_classObj(x1, y1, x2, y2);
			break;
		case 6 : //exit
			cout <<"Thank you for using the program!" << "\n";
			return 0;
			break;
		default :
			cout << "Invalid input. \n";
			break;
		
	}
}
while(switchinput!=6);
}