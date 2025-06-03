#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    //ith index
    cout << str[1] <<endl; // string also like char array
    cout << str.at(2) <<endl;
    //last character of a string
    cout << str.back() <<endl;
    //first character of a string
    cout << str.front() <<endl;
    return 0;
}