#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    char name[100];
    int roll;
    char section;
    double gpa;
};

int main(){
    
    //create object
    //Student a;
    // a.roll = 1001957171;
    // a.section = 'A';
    // a.gpa = 3.94;
    // char temp[100] = "Afif";
    // strcpy(a.name, temp);

    Student a, b;
    //cin >> a.name >> a.roll >> a.gpa >> a.section;
    //cin >> b.name >> b.roll >> b.gpa >> b.section;

    //take string with spaces 
    cin.getline(a.name, 100);
    cin >>a.roll >> a.gpa;
    cin.ignore();
    
    //student b input 
    cin.getline(b.name, 100);
    cin >>b.roll >> b.gpa;

    cout << a.name << " " << a.roll << " " << a.gpa <<endl;
    cout << b.name << " " << b.roll << " " << b.gpa <<endl;

    return 0;
}