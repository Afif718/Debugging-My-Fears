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

/*
Question: Take a sentence S as input and then take another string word X as input. 
Then count how many times the word X appeared in the sentence. 
The words in the sentence are separated by spaces.

*/