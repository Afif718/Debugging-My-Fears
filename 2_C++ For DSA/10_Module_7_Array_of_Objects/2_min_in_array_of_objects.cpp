#include<bits/stdc++.h> // Includes all standard C++ libraries
using namespace std;

// Define a class named 'Student'
// This class contains three public attributes: name, roll, and marks
class Student {
    public:
    string name; // Student's name
    int roll;    // Student's roll number
    int marks;   // Student's marks
};

int main() {
    int arr_size;
    cin >> arr_size; // Read the number of students

    // Declare an array of Student objects
    // Each element in this array represents one student
    Student arr[arr_size];

    // Input data for each student
    // Read name, roll number, and marks for each student
    for(int i = 0; i < arr_size; i++) {
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    // ---------------------------
    // Different ways to find the student with the minimum marks
    // ---------------------------

    // MANUAL WAY (commented out): comparing each student's marks manually
    /*
    int min_marks = arr[0].marks; // Assume first student has the minimum
    for(int i = 0; i < arr_size; i++) {
        if(min_marks < arr[i].marks) {
            arr[i].marks = min_marks; // This line is logically wrong (it changes the data!)
        }
    }
    */

    // ALTERNATIVE WAY (commented out): using built-in min() function to find minimum marks value
    /*
    int min_marks = INT_MAX; // Start with the maximum possible value
    for(int i = 0; i < arr_size; i++) {
        min_marks = min(arr[i].marks, min_marks); // Update min_marks if current is smaller
    }
    */

    // CORRECT AND EFFICIENT WAY: Comparing whole Student objects based on marks
    Student min;           // Create a temporary Student object to store the one with minimum marks
    min.marks = INT_MAX;   // Initialize with the maximum integer value for comparison

    // Iterate through each student in the array
    for(int i = 0; i < arr_size; i++) {
        // If current student has fewer marks than the one stored in 'min', update 'min'
        if(arr[i].marks < min.marks) {
            min = arr[i]; // Copy the whole student object
        }
    }

    // Output the student with the minimum marks
    cout << min.name << " " << min.roll << " " << min.marks << endl;

    return 0;
}
