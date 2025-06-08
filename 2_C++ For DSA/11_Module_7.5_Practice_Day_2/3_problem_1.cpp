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