#include<bits/stdc++.h>
using namespace std;

// Defining a class named Student
// A class is like a blueprint or template for creating objects (individual students in this case)
class Student {
    public:
    // Public members (can be accessed outside the class)
    string name;  // Student's name
    int roll;     // Student's roll number
    int marks;    // Student's marks
};

int main() {
    int arr_size;
    cin >> arr_size;  // Input the number of students
    cin.ignore();     // Ignore the newline after reading arr_size to prepare for getline

    // Declaring an array of Student objects
    // This means you're creating 'arr_size' number of students
    Student arr[arr_size];

    // Loop to input data for each student
    for(int i = 0; i < arr_size; i++) {
        // Since name may contain spaces, use getline for reading full name
        getline(cin, arr[i].name);

        // Read roll number and marks using standard cin
        cin >> arr[i].roll >> arr[i].marks;
        cin.ignore();  // Clear the newline after reading marks before next getline
    }

    // Loop to output all student details
    for(int i = 0; i < arr_size; i++) {
        cout << arr[i].name << " " << arr[i].roll  << " " << arr[i].marks << endl;
    }

    return 0;
}
