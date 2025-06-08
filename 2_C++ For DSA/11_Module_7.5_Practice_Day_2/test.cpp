#include<bits/stdc++.h>
using namespace std;

int main(){

    int print_num_of_times;
    cin >> print_num_of_times;

    char ch;
    cin >> ch;

    string f(print_num_of_times, ch);

    cout << f << " " <<endl;
    return 0;
}