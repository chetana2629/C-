/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with the constructor having the three sides as its parameters*/

#include<iostream>
using namespace std;
class Triangle
{

	private:
	int a,b,c,area,perimeter;
	public:
		
		Triangle(int x,int y , int z) 
		{
		a=x;
		b=y;
		c=z;	
		area=(a+b+c)/2;
		perimeter=(a+b+c);
		}
		
		void show()
		{
			cout<<"\nA="<<a<<"\nB="<<b<<"\nC="<<c<<"\nArea of triangle="<<area<<"\nperimeter of triangle="<<perimeter;
		}
		
};

main()
{
	Triangle t1(3,4,5);
		
		t1.show();		
	
}

