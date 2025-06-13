#include<bits/stdc++.h>
using namespace std;

// Define the Student class with four public attributes
class Student {
    public:
    string nm;   // Student's name
    string cls;  // Student's class
    string s;    // Student's section
    string id;   // Student's ID
};

int main(){
  
    int arr_obj_size;
    cin >> arr_obj_size;  // Read the number of students

    Student arrObj[arr_obj_size];  // Declare an array of Student objects

    // Read input data for each student
    for(int i = 0; i < arr_obj_size; i++){
        cin >> arrObj[i].nm >> arrObj[i].cls >> arrObj[i].s >> arrObj[i].id;
    }

    int index_i = 0;
    string arr_section[arr_obj_size];  // Temporary array to hold reversed sections

    // Reverse the section field and store it in arr_section
    for(int i = arr_obj_size - 1; i >= 0; i--){
        arr_section[index_i] = arrObj[i].s;  // Store section from end to beginning
        index_i++;
    }

    // Update the original Student objects with reversed section values
    for(int i = 0; i < arr_obj_size; i++){
        arrObj[i].s = arr_section[i];
    }

    // Print all updated student data
    for(int i = 0; i < arr_obj_size; i++){
        cout << arrObj[i].nm << " " << arrObj[i].cls << " " << arrObj[i].s << " " << arrObj[i].id << endl;
    }

    return 0;
}
