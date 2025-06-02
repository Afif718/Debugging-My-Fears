#include <bits/stdc++.h>
using namespace std;

// Define a Student class to hold ID, name, section, and total marks
class Student {
public:
    int id;
    char name[101];
    char section;
    int total_marks;
};

int main() {
    int num_of_times;
    cin >> num_of_times; // Read number of test cases

    for (int i = 1; i <= num_of_times; i++) {
        // Create three Student objects
        Student sakib;
        Student rakib;
        Student akib;

        // Read input for three students
        cin >> sakib.id >> sakib.name >> sakib.section >> sakib.total_marks;
        cin >> rakib.id >> rakib.name >> rakib.section >> rakib.total_marks;
        cin >> akib.id >> akib.name >> akib.section >> akib.total_marks;

        // Assume sakib is the top student initially
        Student top = sakib;

        // Compare rakib with current top student
        if (rakib.total_marks > top.total_marks) {
            top = rakib; // rakib has higher marks
        } else if (rakib.total_marks == top.total_marks && rakib.id < top.id) {
            top = rakib; // tie in marks, rakib has smaller ID
        }

        // Compare akib with current top student
        if (akib.total_marks > top.total_marks) {
            top = akib; // akib has higher marks
        } else if (akib.total_marks == top.total_marks && akib.id < top.id) {
            top = akib; // tie in marks, akib has smaller ID
        }

        // Print the top student's details
        cout << top.id << " " << top.name << " " << top.section << " " << top.total_marks << endl;
    }

    return 0;
}
