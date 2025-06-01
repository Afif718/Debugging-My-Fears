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

Student fun(){
    Student afif(11, 5, 4.5);
    return afif;
}

int main(){
    
    
    //Student etu(5, 4, 5);

    Student obj = fun();

    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;

    return 0;
}