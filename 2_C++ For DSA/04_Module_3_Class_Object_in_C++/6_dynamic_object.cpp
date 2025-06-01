#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student( int roll, int cls, double gpa){
        //(*this).roll = roll;

        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

int main(){
    
    //static object
    //Student afif(11, 5, 4.5);

    //dynamic object
    Student* karim = new Student(11, 6, 2.33);

    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;

    return 0;
}