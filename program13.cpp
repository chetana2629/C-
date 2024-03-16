/*Write a program to print the roll number and average marks of 8 students in three subjects (each
out of 100). The marks are entered by the user and the roll numbers are automatically assigned.*/

#include <iostream>
using namespace std;

int main() {

    int num_students;
    double sum_heights = 0;
    double average_height;

    cout << "Enter the number of students: ";
    cin >> num_students;

    for (int i = 0; i < num_students; i++) {
        double height;
        cout << "Enter the height of student " << i + 1 << ": ";
        cin >> height;
        sum_heights += height;
    }

    average_height = sum_heights / num_students;


    cout << "The average height of the students is " << average_height << " cm." << endl;
}
