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

Student* fun(){
    Student afif(11, 5, 4.5);
    Student *p = &afif;
    return p;
}

int main(){
    
    
    //Student etu(5, 4, 5);

    Student* p = fun();

    cout << p->roll << " " << p->cls << " " << p->gpa << endl;

    return 0;
}