/*1.
Create a class named 'Student' with a string variable 'name' 
and an integer variable 'roll_no'. Assign
the value of roll_no as '2' and that of name as
 "John" by creating an object of the class Student.*/

#include<iostream>
#include<string.h>
using namespace std;
 
 class student 
 { 
 public :
 	int roll_no;
    string  name;
 	
 };
 
 main ()
  {
  	student s1 ,s2;
  	s1.roll_no=02;
  	s2.name="john";
cout<<"\nRoll number of student="<<s1.roll_no;
cout<<"\nName ="<<s2.name;
}
