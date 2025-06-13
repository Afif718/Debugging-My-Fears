#include<bits/stdc++.h>
using namespace std;
/*
You will be given data for N students, where each student will have a name (nm), 
class (cls), section (s), student ID (id), math marks (math_marks), and English marks (eng_marks).
*/

class Student {
    public:
    string nm;
    string cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student l, Student r){

    return (l.eng_marks + l.math_marks == r.math_marks + r.eng_marks) ? l.id < r.id : l.eng_marks + l.math_marks > r.math_marks + r.eng_marks;
}

int main(){
    
    int arr_size;
    cin >> arr_size;

    Student arr[arr_size];

    for(int i=0; i<arr_size; i++){
        cin >> arr[i].nm >> arr[i].cls >> arr[i].s >> arr[i].id >> arr[i].math_marks >> arr[i].eng_marks;
    }

    //sort the array based on sum of eng and math marks
    sort(arr, arr+arr_size, cmp);

    //cout << "\n";

    //print the sorted array of objects
    for(int i=0; i<arr_size; i++){
        cout << arr[i].nm << " " << arr[i].cls << " " << arr[i].s << " " << arr[i].id << " " << arr[i].math_marks << " " << arr[i].eng_marks << endl; 
    }
    return 0;
}

/*
Problem Statement

You will be given data for N students, where each student will have a name (nm), class (cls), section (s), student ID (id), math marks (math_marks), and English marks (eng_marks).

Your task is to sort the students data according to the total marks (sum of math_marks and eng_marks) in descending order. If multiple student have the same total marks then sort them according to the id in ascending order as the id will be unique.

Input Format

First line will contain N.
Next N lines will contain nm, cls, s, id, math_marks and eng_marks respectively.
Constraints

1 <= N <= 100
1 <= |nm| <= 100 and will contain only English alphabets.
1 <= cls <= 10
'A' <= s <= 'Z'
1 <= id <= 1000
0 <= math_marks, eng_marks <= 100
Output Format

Output the students data in descending order according to the total marks.
Sample Input 0

5
Munna 8 D 25 50 30
Shojoy 9 E 26 40 50
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Bijoy 7 E 29 68 99
Sample Output 0

Bijoy 7 E 29 68 99
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Shojoy 9 E 26 40 50
Munna 8 D 25 50 30
Sample Input 1

6
Munna 8 D 30 50 40
Shojoy 9 E 25 40 50
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Bijoy 7 E 29 68 99
Khadija 8 E 26 40 50
Sample Output 1

Bijoy 7 E 29 68 99
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Shojoy 9 E 25 40 50
Khadija 8 E 26 40 50
Munna 8 D 30 50 40
*/