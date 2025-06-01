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
    
    Student afif(11, 5, 4.5);
    Student etu(5, 4, 5);

    cout << afif.roll << " " << afif.cls << " " << afif.gpa << endl;

    return 0;
}