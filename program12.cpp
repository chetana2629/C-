/*Write a program that would print the information (name, year of joining, salary, address) of three
employees by creating a class named 'Employee'. The output should be as follows:
Name Year of joining Address
Robert 1994 64C- WallsStreat
Sam 2000 68D- WallsStreat
John 1999 26B- WallsStreat
*/
#include <iostream>
#include<string.h>

using namespace std;

class Employee {
public:
  char name[30], address[30];
  int year;


  Employee(char s[], int y, char a[]) {
   Strcpy(name,s);
    year =y;
    Strcpy(address,a);
  }

  void info() {
    cout << name << " " << year<< " " << address << endl;
  }
};

int main() {
  Employee e1("Robert", 1994, "64C- WallsStreat");
  Employee e2("Sam", 2000, "68D- WallsStreat");
  Employee e3("John", 1999, "26B- WallsStreat");

  e1.info();
  e2.info();
  e3.info();


}
