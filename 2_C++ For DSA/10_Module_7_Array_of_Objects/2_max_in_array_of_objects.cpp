#include<bits/stdc++.h> // Includes all standard C++ headers
using namespace std;

// Define a class named 'Student'
class Student {
public:
    string name;  // Name of the student
    int roll;     // Roll number of the student
    int marks;    // Marks obtained by the student
};

int main() {

    int arr_size; // Variable to store number of students
    cin >> arr_size; // Read the number of students

    // Declare an array of 'Student' objects of size arr_size
    Student arr[arr_size];

    // Input each student's data (name, roll, marks)
    for(int i = 0; i < arr_size; i++) {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    // Create a temporary Student object to track the student with the highest marks
    Student max;
    max.marks = INT_MIN; // Initialize with the smallest possible integer

    // Iterate over the array to find the student with the highest marks
    for(int i = 0; i < arr_size; i++) {
        if(arr[i].marks > max.marks) {
            max = arr[i]; // Update max with the current student object
        }
    }

    // Output the details of the student with the highest marks
    cout << max.name << " " << max.roll << " " << max.marks << endl;

    return 0;
}
