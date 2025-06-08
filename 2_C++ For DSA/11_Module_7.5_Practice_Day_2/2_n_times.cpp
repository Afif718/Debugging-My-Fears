#include<bits/stdc++.h>
using namespace std;

void print_char_number_of_times(char ch, int char_number_of_times){

         for(int i=1; i<=char_number_of_times; i++){
            cout << ch << " "; 
        }
        cout << "\n";
}

int main(){

    int num_of_times;
    cin >> num_of_times;

    for(int i=1; i<=num_of_times; i++){
        int char_number_of_times;
        cin >> char_number_of_times;

        char ch;
        cin >> ch;

        print_char_number_of_times(ch, char_number_of_times);

   
    }

    
    return 0;
}


//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H