/*Write a program to print the volume of a box by creating a class named 'Volume' with an
initialization list to initialize its length, breadth and height. (just to make you familiar with
initialization lists)
*/

#include <iostream>
using namespace std;

class Volume {
private:
  int length;
  int breadth;
  int height;

public:
  Volume(int length, int breadth, int height) 
  {
  	this->length=length;
  	this->breadth=breadth;
  	this->height=height;
  	
  }
  int calculateVolume() {
    return length * breadth * height;
  }
};

int main() {
  
  Volume box(15, 25, 35);


  double volume = box.calculateVolume();

  cout << "The volume of the box is= " << volume << endl;

}
