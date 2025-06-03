#include<bits/stdc++.h>
using namespace std;

int main(){

    char str[1000001];

    //cout << str;
    while(cin.getline(str, 1000001)){

    int count_len = 0;

    for(int i=0; str[i] !='\0'; i++){
        count_len++;
    }

    //cout << count_leng;
    sort(str, str+count_len);

    for(int i=0; i<count_len; i++){
        if(str[i]!= ' '){
            cout << str[i];
        }
    }

    cout << "\n";

    }
    return 0;
}

//problem link:https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-07/challenges/monkey-1-2