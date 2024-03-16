/* Assign and print the roll number, phone number and address
 of two students having names "Sam"
and "John" respectively by creating two objects of the class 'Student'.*/

#include<iostream>
using namespace std;

class student 
{
	private :
		int roll_no , phone_no;
		char add[100];
		
		public :
			void get()
			{
				cout<<"\n Enter the name of roll number ,phone no & address of sam"<<endl;
				cin>>roll_no>>phone_no>>add;
				
			}
			void show()
			{
				cout<<"\nRoll no of sam="<<roll_no<<"\nphone number="<<phone_no<<"\nAddress ="<<add;
			}
};
main()
{
	student sam , john ;
	sam.get();
	sam.show();
	john.get();
	john.show();
}
