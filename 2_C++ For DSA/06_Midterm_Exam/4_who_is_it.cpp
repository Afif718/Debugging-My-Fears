#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    char name[101];
    char section;
    int total_marks;
};

int main() {
    int num_of_times;
    cin >> num_of_times;
    
    for (int i = 1; i <= num_of_times; i++) {
        Student sakib;
        Student rakib;
        Student akib;

        cin >> sakib.id >> sakib.name >> sakib.section >> sakib.total_marks;
        cin >> rakib.id >> rakib.name >> rakib.section >> rakib.total_marks;
        cin >> akib.id >> akib.name >> akib.section >> akib.total_marks;

        Student top = sakib;

        if (rakib.total_marks > top.total_marks) {
            top = rakib;
        } else if (rakib.total_marks == top.total_marks && rakib.id < top.id) {
            top = rakib;
        }

        if (akib.total_marks > top.total_marks) {
            top = akib;
        } else if (akib.total_marks == top.total_marks && akib.id < top.id) {
            top = akib;
        }

        cout << top.id << " " << top.name << " " << top.section << " " << top.total_marks << endl;
    }

    return 0;
}
