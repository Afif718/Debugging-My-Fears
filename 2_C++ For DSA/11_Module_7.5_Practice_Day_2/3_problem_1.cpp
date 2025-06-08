#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;
};

bool cmp(Student l, Student r){

    //sort decending order
    //return l.marks > r.marks;

    return (l.marks == r.marks) ? l.roll < r.roll : l.marks > r.marks;
}

int main(){
    int arr_size;
    cin >> arr_size;

    Student arr[arr_size];

    for(int i=0; i<arr_size; i++){
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    sort(arr, arr+arr_size, cmp);

    cout << endl;

    for(int i=0; i<arr_size; i++){
        cout << arr[i].name << " " << arr[i].roll << " " << arr[i].marks << endl;
    }
    
    return 0;
}

/*

Question: Make a class named Student. Write a program to take a positive integer N as input and make an Student array of size N. 
Student 
{
	name;
	roll;
	marks;
}
Your task is to sort the Students data according to the marks in descending order. If multiple students have the same marks then sort them according to the roll in ascending order as the roll will be unique.
Note: name will not contain any spaces.

*/