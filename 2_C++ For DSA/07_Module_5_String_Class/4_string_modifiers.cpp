#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "Hello";
    string s2 = "World";
    
    //add two strings
    //string newS = s1 += s2;

    //add two strings using append
    // string newS = s1.append(s2);
    // cout << newS;

    //add a character to the end of the string
    // s1.push_back('A');
    // cout << s1;

    //remove a character from the end of the string
    // s1.pop_back();
    // cout << s1;

    //assign 
    // s1 = s2;
    // cout << s1;
    //we can do the same thing using assign function
    // s1.assign(s2);
    // cout << s1;

    //erase characters from the string
    // s1.erase(5); // it will delete characters from 5th index to the end
    // cout << s1;

    //erase spacific characters
    // s1.append(s2);
    // s1.erase(3, 2); // it will start deleting from 3 and from there it will delete 2 characts
    // cout << s1;

    //replace a certain portion a string
    //s1.append(s2);
    //s1.replace(5, 5, " Bangladesh"); // it will start replacing from index 6 and stop at 5 
    // we can also do that go to index 6 and add BD and no need to replace 
    // s1.replace(6, 0, "BD");
    // cout << s1;

    //insert at ith index
    s1.append(s2);
    s1.insert(5, "Afif");
    cout << s1;

    return 0;
}