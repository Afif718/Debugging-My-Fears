#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    cout << s<< endl;

    //string stream gives word by word of string with spaces
    stringstream ss(s);
    string word;
    //ss >> word;
    // cout << word << endl; // first word

    // ss >> word;
    // cout << word << endl; // second word

    //rather than printing one word at a time use a loop to print it
    int count_word = 0;
    while(ss >> word){
        cout << word << endl;
        count_word ++;
    }

    cout << count_word << endl;
    return 0;
}