#include<bits/stdc++.h>
using namespace std;
/*
You will be given data for N students, where each student will have a name (nm), 
class (cls), section (s), student ID (id), math marks (math_marks), and English marks (eng_marks).
*/

class Student {
    public:
    string nm;
    string cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student l, Student r){

    return (l.eng_marks + l.math_marks == r.math_marks + r.eng_marks) ? l.id < r.id : l.eng_marks + l.math_marks > r.math_marks + r.eng_marks;
}

int main(){
    
    int arr_size;
    cin >> arr_size;

    Student arr[arr_size];

    for(int i=0; i<arr_size; i++){
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    //sort the array based on sum of eng and math marks
    sort(arr, arr+arr_size, cmp);

    //cout << "\n";

    //print the sorted array of objects
    for(int i=0; i<arr_size; i++){
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl; 
    }
    return 0;
}