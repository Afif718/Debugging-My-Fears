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
    // If l has more marks than r, place l before r (descending order)
    // if(l.marks < r.marks){
    //     return true;
    // } else{
    //     return false;
    // }

    return l.marks > r.marks; // boro chilay on the right side give >

    // Note: this is equivalent to:
    // if(l.marks > r.marks) return true;
    // else return false;
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
    // It will sort students based on their marks in descending order
    sort(arr, arr + arr_size, cmp);

    cout << "\n";

    // Output the sorted student data
    for(int i = 0; i < arr_size; i++){
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }

    return 0;
}
