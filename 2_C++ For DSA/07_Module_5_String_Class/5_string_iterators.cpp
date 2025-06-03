#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "hello";

    // for(int i=0; i<str.size(); i++){
    //     cout << str[i] << endl;
    // }

    //cout << *str.begin() << endl; // first character of the string
    //cout << *str.end() << endl; // adds an extra character at the end of the string that why it prints nothing. 
    //print the actual last character of the string
    //cout << *(str.end() -1) << endl;

    //now print all the characters using iterator not using i
    //it will be usefull for some data structurs where there is no index
    for(string::iterator it = str.begin(); it<str.end(); it++){
        cout << *it << endl; // prints the character one after another
    }

    return 0;
}