/*Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by
creating a class named 'Triangle' with a function to print the area and perimeter.*/
#include<iostream>
using namespace std;
class triangle
 {
	private :
		int a, b ,c,area=0,perimeter=0;
		public:
			void get ()
			{
			cout<<"\nEnter the sides of triangle";
			cin>>a>>b>>c;
				
			}
			void show()
			{
				area=(a+b+c)/2;
				perimeter=a+b+c;
				cout<<"\nArea of triangle="<<area;
				cout<<"\nPerimeter of triangle="<<perimeter;
				
			}
};
main()
{
	triangle t1,t2;
	t1.get();
	
	t1.show();
}
