/*Write a program to calculate the average height of all the students of a class. The number of students
and their heights are entered by the user.
*/
#include <iostream>

using namespace std;

int main() {
  int num_students;
  double total_height = 0;
  double average_height;

  cout << "Enter the number of students: ";
  cin >> num_students;

  for (int i = 0; i < num_students; i++) {
    double height;
    cout << "Enter the height of student " << i + 1 << ": ";
    cin >> height;

    total_height += height;
  }

  average_height = total_height / num_students;

  cout << "The average height is " << average_height << " inches." << endl;

  return 0;
}
