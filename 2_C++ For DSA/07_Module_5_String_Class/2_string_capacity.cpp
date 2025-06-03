#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "Hello World";

    //delete the string
    //str.clear();

    //check if the string is empty or not (true or false)
    //str.empty();

    // if(str.empty()){
    //     cout << "True" << "\n";
    // } else{
    //     cout << "False" << "\n";
    // }

    //resize the string 
    //str.resize(4); // it will keep 4 characters and delete others
    //str.resize(20, 'x'); //right now the string size is 11 the extra spaces will be replaced with x

    cout << str.size() << "\n";
    cout << str << "\n";
    //cout << str.max_size();
    return 0;
}