#include<bits/stdc++.h>
using namespace std;

// Class to store student information
class Student {
    public:
    string nm;   // Name
    string cls;  // Class
    string s;    // Section
    string id;   // ID
};

int main(){
  
    int arr_obj_size;
    cin >> arr_obj_size;  // Input the number of students

    Student arrObj[arr_obj_size];  // Array to hold student records

    // Input student details
    for(int i = 0; i < arr_obj_size; i++){
        cin >> arrObj[i].nm >> arrObj[i].cls >> arrObj[i].s >> arrObj[i].id;
    }

    // In-place reversal of the 'section' field (s) only
    for(int i = 0, j = arr_obj_size - 1; i < j; i++, j--){
        swap(arrObj[i].s, arrObj[j].s);
    }

    // Output the updated student records
    for(int i = 0; i < arr_obj_size; i++){
        cout << arrObj[i].nm << " " << arrObj[i].cls << " " << arrObj[i].s << " " << arrObj[i].id << endl;
    }

    return 0;
}
