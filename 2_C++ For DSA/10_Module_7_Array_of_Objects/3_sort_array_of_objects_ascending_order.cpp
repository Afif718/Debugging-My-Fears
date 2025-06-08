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
// This function will be used by sort() to decide the order
bool cmp(Student l, Student r){
    // If l has less marks than r, place l before r (ascending order)
    // if(l.marks < r.marks){
    //     return true;
    // } else {
    //     return false;
    // }

    return l.marks < r.marks; // choto chilay on the right side give <

    // Note: alternatively, you can just write: return l.marks < r.marks;
}

int main(){
    int arr_size;
    cin >> arr_size;  // Take number of students

    // Declare an array of Student objects of given size
    Student arr[arr_size];

    // Take input for each student
    for(int i = 0; i < arr_size; i++){
        // Input name, roll number, and marks for each student
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    // Sort the array of Student objects using custom comparator
    // It will sort students based on their marks in ascending order
    sort(arr, arr + arr_size, cmp);

    // Output the sorted student data
    for(int i = 0; i < arr_size; i++){
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}
