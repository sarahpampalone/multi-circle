#include <iostream>
#include <cstdio>
#include <cmath>
#include <circle.h>
#define PI 3.1415926535

using namespace std;

int main(){
  circle <int> myObj_1(1,3);
  circle <double> myObj_2(-1.5, -6.65, -0.5, 10.0);
  double x1, y1, x2, y2;
  int value;
  
  do{
    cout << "\n Pick a function : \n";
    cout << "1. Calculate the radii \n";
    cout << "2. Calculate the circumferences \n";
    cout << "3. Calculate the areas \n";
    cout << "4. Enter new coordinates for Object 1 \n";
    cout << "5. Enter new coordinates for Object 2 \n";
    cout << "6. End the program \n";
    cin >> value; //switch option
    
    switch(value){
      case 1 : //radius
        cout << "Object 1 : " << myObj_1.getRadius() << "\n";
        cout << "Object 2 : " << myObj_2.getRadius() << "\n";
        break;
      case 2 : //circumference
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
        myObj_1.populate_classObj(x1,y1,x2,y2);
        break;
      case 5 :
        cout << "Please enter your first coordinates (center of circle) : \n";
        cin >> x1;
        cin >> y1;
        cout << "Please enter your second coordinates : \n";
        cin >> x2;
        cin >> y2;
        myObj_2.populate_classObj(x1,y1,x2,y2);
        break;
      case 6 : //exit
        cout << "Thank you for using the program!" << "\n";
        return 0;
        break;
      default :
        cout << "Invalid input. \n";
        break;
    }
  }
while(value!=6);
}
        
