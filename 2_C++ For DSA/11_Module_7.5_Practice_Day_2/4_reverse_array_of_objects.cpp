#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    int marks;
};


int main(){
    int arr_size;
    cin >> arr_size;

    Student arr[arr_size];

    for(int i=0; i<arr_size; i++){
        cin >> arr[i].name >> arr[i].roll >> arr[i].marks;
    }

    cout << endl;

    //print the array of the object in reverse
    for(int i=arr_size - 1; i>=0; i--){
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
Your task is to reverse the array and print the array of Student.
Note: name will not contain any spaces.


*/