/*Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by
creating a class named 'Rectangle' with a function named 'Area' which returns the area. Length and
breadth are passed as parameters to its constructor*/

#include<iostream>
using namespace std;
class Rectangle
{

	private:
	int a,b,area;
	public:
		
		Rectangle(int x,int y) 
		{
		a=x;
		b=y;	
		
		}
		int are()
		{
			area=a*b;
			return(area);
		}
		void show()
		{
			cout<<"\nA="<<a<<"\nB="<<b<<"\nArea of rectangle="<<area;
		}
		
};

main()
{
	Rectangle r1(4,5),r2(5,8);
	r1.are();
	r1.show();
	r2.are();
	r2.show();
	
}

