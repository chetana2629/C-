/* Write a program to print the area of a rectangle by creating a class named 'Area' having two
functions. First function named as 'setDim' takes the length and breadth of the rectangle as
parameters and the second function named as 'getArea' returns the area of the rectangle. Length and
breadth of the rectangle are entered through keyboard.*/


#include<iostream>
using namespace std;

class Area
{
 private :
 int length,breadth ,aarea;
 public:
 
 void setDim()
 {
 	cout<<"\nEnter the length & breadth of rectangle";
 	cin>>length>>breadth;
	 }	
	 void getArea()
	 {
	 	aarea=length*breadth;
	 	cout<<"\nArea of reactangle="<<aarea;
	 }
};
main()
{
	Area a1;
	
	a1.setDim();
	a1.getArea();
}
