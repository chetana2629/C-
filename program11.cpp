/*Write a program to print the name, salary and date of joining of 10 employees in a company. Use
array of objects.*/
#include<iostream>
using namespace std;
class Emp
{
private:
	int join,salary;
	char name[50];

public:	

	void set()
	{
		cout<<"\nEnter Employee joinig date Name and salary";
		cin>>join>>name>>salary;
		
	}
	
	void get()
	{
		cout<<"\n"<<join<<"\t\t"<<name<<"\t\t"<<salary;
		
			}
	
	
};
main()
{
	Emp obj[10];
	int i;
	cout<<"\nEnter 10 Employee details";
	for(i=0;i<10;i++)  //i=0 i++  i=1
	{
	obj[i].set();	

	cout<<"\nEmployee  Details";
	cout<<"\n-----------------------------------------------";

}
	for(i=0;i<10;i++)
	{
	      obj[i].get();	
	}

}

