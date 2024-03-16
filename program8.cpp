/*Print the average of three numbers entered by the user by creating a class named 'Average' having a
function to calculate and print the average without creating any object of the Average class.*/

#include<iostream>
using namespace std;

class Average 
{
private :
	int a,b,c, avg=0;
	public:
	
	void average()
	{
		cout<<"\nEnter the value of a ,b &c";
		cin>>a>>b>>c;
		avg=(a+b+c)/3;
		
		
		}	
			void print()
			{
			cout<<"\nAverage of three number="<<avg;	
			
			}
	
	
};
main()
{
	print();
	
	
}
