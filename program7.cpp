/*Write a program to print the area of a rectangle by creating a class named 'Area' taking the values of
its length and breadth as parameters of its constructor and having a function named 'returnArea'
which returns the area of the rectangle. Length and breadth of the rectangle are entered through
keyboard.*/

#include<iostream>
using namespace std;

class Area
{
	private :
		int l , b , a=0;
		public:
			
			
			Area(int x, int y)
			{
				l=x;
				b=y;
				cout<<"\nlength="<<l<<"\nBreadth="<<b;
				
			}
			int  returnArea()
			{
				a=l*b;
				return(a);
			}
			
			void show()
			{
			cout<<"\nArea of reactangle="<<a;	
			}
};

main()
{
	Area r1(4,5);
	r1.returnArea();
	r1.show();
}
