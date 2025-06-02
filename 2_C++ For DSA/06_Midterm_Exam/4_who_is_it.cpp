#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int id;
    char name[101];
    char section;
    int total_marks;
};


int main(){
    
    Student sakib;
    Student rakib;
    Student akib;

    cin >> sakib.id >> sakib.name >> sakib.section >> sakib.total_marks;
    cin >> rakib.id >> rakib.name >> rakib.section >> rakib.total_marks;
    cin >> akib.id >> akib.name >> akib.section >> akib.total_marks;

    if((sakib.total_marks >= rakib.total_marks) && (sakib.total_marks >= akib.total_marks)){
        cout << sakib.id << sakib.name << sakib.section << sakib.total_marks;
    } else if((rakib.total_marks >= sakib.total_marks) && (rakib.total_marks >= akib.total_marks)){
        cout << rakib.id << rakib.name << rakib.section << rakib.total_marks;
    } else{
        cout << akib.id << akib.name << akib.section << akib.total_marks;
    }

    return 0;
}