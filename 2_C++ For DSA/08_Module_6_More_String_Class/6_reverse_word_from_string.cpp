#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    stringstream ss(s);
    string word;

    //reverse(s.begin(), s.end());
    /*
    I love You
    I evol uoY 
    */
   ss >> word;
   cout << word;


    while(ss >> word){
        reverse(word.begin(), word.end());
        //remove space from the end
        cout  << " " << word;
    }
    return 0;
}