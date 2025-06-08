#include <bits/stdc++.h>
using namespace std;

// Define a class to represent a student
class Student {
public:
    string name;  // Name of the student
    int roll;     // Roll number of the student
    int marks;    // Marks obtained by the student
};

// Custom comparator function for sorting
bool cmp(Student l, Student r){

    // --- Sorting Logic Variants ---

    // Variant 1 (commented): If marks are the same, sort based on roll number (ascending)
    // if(l.marks == r.marks){
    //     return l.roll < r.roll;
    // } else{
    //     return l.marks < r.marks;
    // }

    // Variant 2 (active): Same logic using ternary operator
    // Primary sort by marks (ascending), secondary by roll (ascending if marks equal)
    return (l.marks == r.marks) ? l.roll < r.roll : l.marks < r.marks;

    // Variant 3 (commented): More verbose version achieving the same result
    // if(l.marks < r.marks){
    //     return true;
    // } else if(l.marks > r.marks){
    //     return false;
    // } else {
    //     return l.roll < r.roll;
    // }

    // Variant 4 (commented): For descending order of marks only (no secondary sort)
    // return l.marks > r.marks;
}

int main(){
    int arr_size;
    cin >> arr_size;  // Input: number of students

    // Declare an array of Student objects of given size
    Student arr[arr_size];

    // Take input for each student
    for(int i = 0; i < arr_size; i++){
        // Input format: name roll marks
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    // Sort the array of Student objects using the custom comparator
    // Current comparator: Sorts by marks in ascending order, and by roll if marks are equal
    sort(arr, arr + arr_size, cmp);

    cout << "\n";

    // Output the sorted student data
    for(int i = 0; i < arr_size; i++){
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}
