#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;

    getline(cin, str);

    string x;
    cin >> x;

    stringstream ss(str);

    string word;
    
    int count_x = 0;

    while(ss >> word){

        if(word == x){
            count_x++;
        }
        //cout << word <<endl;
    }

    cout << count_x <<endl;
    return 0;
}