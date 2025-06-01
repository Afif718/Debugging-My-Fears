/*
Given a comparison symbol S between two numbers A and B. 
Determine whether it is Right or Wrong.

The comparison is as follows: A < B, A > B, A = B.

Where A, B are two integer numbers and S refers to the sign between them.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char s;
    cin >> a >> s >> b;

    //cout << s;
    bool isright= false;

    if(s == '>'){
        a>b? cout << "Right" : cout << "Wrong";
    } 

    if(s == '<'){
        a<b? cout << "Right" : cout << "Wrong";
    }

    if(s == '='){
        a==b? cout << "Right" : cout << "Wrong";
    }
    return 0;
}

//problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V