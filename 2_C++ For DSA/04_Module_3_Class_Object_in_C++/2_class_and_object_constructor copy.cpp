#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;

    Student( int r, int c, double g){
        roll = r;
        cls = c;
        gpa = g;
    }
};

int main(){
    
    Student afif(11, 5, 4.5);
    Student etu(5, 4, 5);

    cout << afif.roll << " " << afif.cls << " " << afif.gpa << endl;

    return 0;
}