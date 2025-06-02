#include<bits/stdc++.h>
using namespace std;
class Student {
    public: 
        string name;
        int roll;
        char section;
        int math_marks;
        int cls;
    
    //constructor
    Student(string name, int roll, int section, int math_marks, int cls){
        this->name = name;
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }

};

int main(){
    
    Student Roni("Roni", 5, 'A', 75, 4);
    Student Moni("Moni", 11, 'B', 89, 5);
    Student Rahim("Rahim", 12, 'C', 99, 6);

    if((Roni.math_marks > Moni.math_marks) && (Roni.math_marks > Rahim.math_marks) ){
        cout << Roni.math_marks << " " << Roni.name;
    } else if((Moni.math_marks > Roni.math_marks) && (Moni.math_marks > Rahim.math_marks) ){
        cout << Moni.math_marks << " " << Moni.name;
    } else{
        cout << Rahim.math_marks << " " << Rahim.name;
    }

    return 0;
}