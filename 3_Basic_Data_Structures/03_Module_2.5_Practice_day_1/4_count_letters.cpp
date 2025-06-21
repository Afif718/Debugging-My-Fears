#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;

    //it will create a vector of size 26 and all values will be 0
    vector<int> alpha_arr(26, 0);

    for(int i=0; i<str.size(); i++){
        int val = (int)str[i] - 'a';
        alpha_arr[val]++;
    }

    for(int i=0; i<26; i++){
        if(alpha_arr[i] > 0){
            cout << (char) (i+'a') << " : " << alpha_arr[i] << endl;
        }
    }
    
    return 0;
}