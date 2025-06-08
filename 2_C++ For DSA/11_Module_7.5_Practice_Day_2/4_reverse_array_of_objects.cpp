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